package rv32

import chisel3._
class Regfile extends Module {
  val io = IO(new Bundle {
    val rdIndex0 = Input(UInt(5.W));
    val rdIndex1 = Input(UInt(5.W));
    val wdIndex = Input(UInt(5.W));
    val wdEn = Input(Bool());
    val wdData = Input(UInt(32.W));

    val rd0 = Output(UInt(32.W));
    val rd1 = Output(UInt(32.W));
    val debugRegs = Output(Vec(32, UInt(32.W)))
  })


  val regs = RegInit(VecInit(Seq.fill(32)(0.U(32.W))))

  when (io.wdEn) {
    when (io.wdIndex =/= 0.U) {
      regs(io.wdIndex) := io.wdData
    }
  }

  io.rd0 := regs(io.rdIndex0);
  io.rd1 := regs(io.rdIndex1)

  io.debugRegs := regs
}
