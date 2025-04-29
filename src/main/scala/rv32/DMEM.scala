package rv32

import chisel3._
import chisel3.util._

class DMEM (w: Int) extends Module {
  val io = IO(new Bundle {
    val wdData = Input(UInt(32.W))
    val wdEn = Input(Bool())
    val addr = Input(UInt(32.W))
    val rdLength = Input(UInt(32.W))
    val rdMode = Input(Bool())
    val rdData = Output(UInt(32.W))
  })

  val dmem = Mem(w, UInt(8.W))

  when (io.wdEn) {
    dmem(io.addr + 0.U) := io.wdData(7, 0)
    dmem(io.addr + 1.U) := io.wdData(15, 8)
    dmem(io.addr + 2.U) := io.wdData(23, 16)
    dmem(io.addr + 3.U) := io.wdData(31, 24)
  }

  io.rdData := 0.U
  when (io.rdMode) {
    switch (io.rdLength) {
      is (1.U) {
        val rdData = dmem(io.addr).asSInt.pad(32)
        io.rdData := rdData.asUInt
      }
      is (2.U) {
        val rdData = (dmem(io.addr + 1.U) << 8 | dmem(io.addr)).asSInt.pad(32)
        io.rdData := rdData.asUInt
      }
    }
  } .otherwise {
    switch (io.rdLength) {
      is (1.U) {
        val rdData = dmem(io.addr).pad(32)
        io.rdData := rdData
      }
      is (2.U) {
        val rdData = (dmem(io.addr + 1.U) << 8 | dmem(io.addr)).pad(32)
        io.rdData := rdData
      }
      is (4.U) {
        val rdData = ((dmem(io.addr + 3.U) << 24) | (dmem(io.addr + 2.U) << 16) | dmem(io.addr + 1.U) << 8 | dmem(io.addr)).pad(32)
        io.rdData := rdData
      }
    }
  }

}
