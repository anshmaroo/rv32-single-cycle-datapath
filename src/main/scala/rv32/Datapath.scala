package rv32

import chisel3._
import chisel3.util._

class Datapath extends Module {
  val io = IO(new Bundle {
    val pcOut = Output(UInt(32.W))
    val debugRegs = Output(Vec(32, UInt(32.W)))
    val debugImmediate = Output(SInt(32.W))
    val instruction = Output(UInt(32.W));
  })

  val pc = RegInit(0.U(32.W))
  val regfile = Module(new Regfile())
  val immGen = Module(new ImmGen())
  val branchComparator = Module(new BranchComparator())
  val ALU = Module(new ALU())
  val IMEM = Module(new IMEM(1000))
  val DMEM = Module(new DMEM(1000))
  val control = Module(new ControlLogic())

  /* Instruction Fetch */
  IMEM.io.addr := pc
  val instruction = IMEM.io.instruction
  io.instruction := instruction

  /* Instruction Decode */
  control.io.instruction := instruction

  // Regfile
  regfile.io.rdIndex0 := instruction(19, 15)
  regfile.io.rdIndex1 := instruction(24, 20)
  regfile.io.wdIndex := instruction(11, 7)
  regfile.io.wdEn := control.io.regWEn
  val rs1 = regfile.io.rd0
  val rs2 = regfile.io.rd1

  // ImmGen
  immGen.io.instruction := instruction
  immGen.io.immSel := control.io.immSel
  val immediate = immGen.io.out

  // Branch comparator
  branchComparator.io.cmpMode := control.io.cmpMode
  branchComparator.io.in0 := rs1
  branchComparator.io.in1 := rs2
  val branchTaken = (branchComparator.io.branchTaken & control.io.isBranch)

  // Memory
  DMEM.io.wdEn := control.io.memRWSel
  DMEM.io.rdLength := control.io.memReadLength
  DMEM.io.rdMode := control.io.memReadMode

  // ALU Select
  ALU.io.aluSel := control.io.aluSel


  /* Execute */
  // ALU
  ALU.io.in0 := Mux(control.io.aSel, pc, rs1)
  ALU.io.in1 := Mux(control.io.bSel, immediate.asUInt, rs2)

  /* Memory */
  DMEM.io.addr := ALU.io.out
  DMEM.io.wdData := rs2 & control.io.memWriteMask

  /* Register write back */
  regfile.io.wdData := MuxCase(1.U, Seq(
      (control.io.wbSel === 0.U) -> DMEM.io.rdData,
      (control.io.wbSel === 1.U) -> ALU.io.out,
      (control.io.wbSel === 2.U) -> (pc + 4.U)
    )
  )

  /* PC Select*/
  when (branchTaken || control.io.unconditionalJump) {
    pc := ALU.io.out
  } .elsewhen (reset.asBool) {
    pc := 0.U
  } .otherwise {
    pc := pc + 4.U
  }

  io.pcOut := pc
  io.debugRegs := regfile.io.debugRegs
  io.debugImmediate := immediate

}

object VerilogDatapathGen extends App {
  // Emit Verilog
  emitVerilog(new Datapath(), Array("--target-dir", "generated"))
}
