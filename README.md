# RISC-V 32I Single Cycle Datapath
a single cycle rv32i datapath written in chisel. uses verilator and chiselsim for testing. combinational control logic + parameterizable memory sizes (IMEM + DMEM)

notes: 
- control logic is quick and dirty, could be simplified heavily. probably a good idea to do so when pipelining
- imem only supports word length instructions. ideally this is not the case. need to figure out how to load mems from byte files in little-endian format
- ideally, xlen should be parameterizable. this shouldn't really be too difficult, given that chisel is built for this sort of thing. adding different instructions is a different story though
