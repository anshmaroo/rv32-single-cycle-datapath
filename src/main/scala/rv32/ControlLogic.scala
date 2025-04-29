package rv32

import chisel3._
import chisel3.util._
class ControlLogic extends Module {
  val io = IO(new Bundle {
    val instruction = Input(UInt(32.W))
    val immSel = Output(UInt(3.W))
    val aSel = Output(Bool())
    val bSel = Output(Bool())
    val aluSel = Output(UInt(4.W))
    val regWEn = Output(Bool())
    val memRWSel = Output(Bool())
    val memWriteMask = Output(UInt(32.W))
    val memReadLength = Output(UInt(32.W))
    val memReadMode = Output(Bool())
    val wbSel = Output(UInt(2.W))
    val cmpMode = Output(UInt(3.W))
    val unconditionalJump = Output(Bool());
    val isBranch = Output(Bool());
  })

  val opcode = io.instruction(6, 0)
  val funct3 = io.instruction(14, 12)
  val funct7aux = io.instruction(30)

  // immediate type/B-mux selection
  io.bSel := false.B
  io.immSel := 0.U
  switch (opcode) {
    is(0b0110011.U) {
      // r-type
      io.bSel := false.B
    }
    is(0b0010011.U) {
      // i-type (arithmetic)
      io.immSel := 0.U
      io.bSel := true.B
    }
    is(0b0000011.U) {
      // i-type (loads)
      io.immSel := 0.U
      io.bSel := true.B
    }
    is(0b0100011.U) {
      // s-type
      io.immSel := 1.U
      io.bSel := true.B
    }
    is(0b1100011.U) {
      // b-type
      io.immSel := 2.U
      io.bSel := true.B
    }
    is(0b0110111.U) {
      // u-type (lui)
      io.immSel := 3.U
      io.bSel := true.B
    }
    is(0b0010111.U) {
      // u-type (auipc)
      io.immSel := 3.U
      io.bSel := true.B
    }
    is(0b1101111.U) {
      // j-type
      io.immSel := 4.U
      io.bSel := true.B
    }
    is(0b1100111.U) {
      // i-type
      io.immSel := 0.U
      io.bSel := true.B
    }
  }

  // A-mux input selection
  io.aSel := false.B
  switch (opcode) {
    is(0b1100011.U) {
      io.aSel := true.B
    }
    is(0b1101111.U) {
      io.aSel := true.B
    }
  }


  // ALU select
  io.aluSel := 0.U
  when (opcode === 0b0000011.U || opcode === 0b0100011.U || opcode === 0b1100011.U || opcode === 0b1100111.U) {
    // load, store, branch, jump - add
    io.aluSel := 0.U
  } .elsewhen (opcode === 0b0110011.U) {
    // r-types
    switch (funct3) {
      is(0b000.U) {
        when (funct7aux) {
          io.aluSel := 1.U
        } otherwise {
          io.aluSel := 0.U
        }
      }
      is (0b111.U) {
        io.aluSel := 8.U
      }
      is (0b110.U) {
        io.aluSel := 7.U
      }
      is(0b100.U) {
        io.aluSel := 9.U
      }
      is(0b001.U) {
        io.aluSel := 2.U
      }
      is(0b101.U) {
        when (funct7aux) {
          io.aluSel := 4.U
        } otherwise {
          io.aluSel := 3.U
        }
      }
      is(0b010.U) {
        io.aluSel := 5.U
      }
      is(0b011.U) {
        io.aluSel := 6.U
      }
    }
  } .elsewhen (opcode === 0b0010011.U) {
    switch (funct3) {
      is(0b000.U) {
        io.aluSel := 0.U
      }
      is (0b111.U) {
        io.aluSel := 8.U
      }
      is (0b110.U) {
        io.aluSel := 7.U
      }
      is(0b100.U) {
        io.aluSel := 9.U
      }
      is(0b001.U) {
        io.aluSel := 2.U
      }
      is(0b101.U) {
        when (funct7aux) {
          io.aluSel := 4.U
        } otherwise {
          io.aluSel := 3.U
        }
      }
      is(0b010.U) {
        io.aluSel := 5.U
      }
      is(0b011.U) {
        io.aluSel := 6.U
      }
    }
  }


  // write enable
  io.regWEn := true.B
  switch (opcode) {
    is (0b0100011.U) {
      io.regWEn := false.B
    }
    is (0b1100011.U) {
      io.regWEn := false.B
    }
  }

  // memory read/write selection
  io.memRWSel := false.B
  switch (opcode) {
    is(0b0100011.U) {
      io.memRWSel := true.B
    }
  }

  // memory write mask
  io.memWriteMask := 0xffffffffL.U
  switch (funct3) {
    is(0b000.U) {
      // byte
      io.memWriteMask := 0xffL.U;
    }
    is (0b001.U) {
      // halfword
      io.memWriteMask := 0xffffL.U;
    }
    is (0b010.U) {
      // word
      io.memWriteMask := 0xffffffffL.U
    }
  }

  // memory read length/mode
  io.memReadLength := 4.U
  io.memReadMode := 0.B;
  switch (funct3) {
    is(0b000.U) {
      // byte
      io.memReadLength := 1.U;
      io.memReadMode := 1.B;
    }
    is (0b100.U) {
      // byte unsigned
      io.memReadLength := 1.U;
      io.memReadMode := 0.B;
    }
    
    is (0b001.U) {
      // halfword
      io.memReadLength := 2.U
      io.memReadMode := 1.B;
    }
    is (0b101.U) {
      // halfword unsigned
      io.memReadLength := 2.U
      io.memReadMode := 0.B;
    }
    is (0b010.U) {
      // word
      io.memReadLength := 4.U
      io.memReadMode := 0.B;
    }
  }

  // regfile write select
  io.wbSel := 1.U
  switch (opcode) {
    is(0b0110011.U) {
      // r-type
      io.wbSel := 1.U
    }
    is(0b0010011.U) {
      // i-type
      io.wbSel := 1.U
    }
    is(0b0000011.U) {
      // load
      io.wbSel := 0.U
    }
    is(0b1101111.U) {
      // jump
      io.wbSel := 2.U
    }
    is(0b1100111.U) {
      // jump and link
      io.wbSel := 2.U
    }
    is(0b0010111.U) {
      // u-type
      io.wbSel := 1.U
    }
    is(0b0110111.U) {
      // u-type
      io.wbSel := 1.U
    }
  }

  // branch mode (just use funct3)
  io.cmpMode := funct3

  // is branch
  io.isBranch := false.B
  when (opcode === 0b1100011.U) {
    io.isBranch := true.B
  }

  // unconditional jump (used for pc select)
  io.unconditionalJump := false.B
  when (opcode === 0b1100111.U|| opcode === 0b1101111.U) {
    io.unconditionalJump := true.B
  }
}
