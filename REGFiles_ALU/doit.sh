#!/bin/sh

#cleanup
rm -rf obj_dir
rm -f part2.vcd


#run Verilator to translate Verilog into C++, including the C++ testbench
verilator -Wall --cc --trace part2.sv --exe part2_tb.cpp

#build C++ project via make automatically generated by verilator
make -j -C obj_dir/ -f Vpart2.mk Vpart2

#clears up all the compile time junk
#if youre having problems and need to see the errors comment the clear
#clear

#run executable simulation file
obj_dir/Vpart2


#to run:
#source ./doit.sh