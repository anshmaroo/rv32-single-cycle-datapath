package rv32

import chisel3._
import chisel3.util._

class ImmGen extends Module {
  val io = IO(new Bundle {
    val instruction = Input(UInt(32.W));
    val immSel = Input(UInt(3.W))
    val out = Output(SInt(32.W));
  })

  val iTypeImmediate = Cat(Fill(20, io.instruction(31)), io.instruction(31, 20)).asSInt
  val sTypeImmediate = Cat(Fill(20, io.instruction(31)), io.instruction(31, 25), io.instruction(11, 7)).asSInt
  val bTypeImmediate = Cat(Fill(19, io.instruction(31)), io.instruction(7), io.instruction(30, 25), io.instruction(11, 8), "b0".U(1.W)).asSInt
  val uTypeImmediate = Cat(io.instruction(31, 12), 0.U(12.W)).asSInt
  val jTypeImmediate = Cat(Fill(11, io.instruction(31)), io.instruction(19, 12), io.instruction(20), io.instruction(30, 21), "b0".U(1.W)).asSInt

  val immediate = Wire(SInt(32.W))
  immediate := 0.S
  switch (io.immSel) {
    is(0.U) {
      immediate := iTypeImmediate
    }
    is (1.U) {
      immediate := sTypeImmediate
    }
    is(2.U) {
      immediate := bTypeImmediate
    }
    is(3.U) {
      immediate := uTypeImmediate
    }
    is(4.U) {
      immediate := jTypeImmediate
    }
  }
  io.out := immediate
}
