# A Simple Makefile for SystemC
# By: Pourya Gohari

# ===> Definations
CXX = g++
input =ImSub_tb.cpp   #Add Your File Name Here 

# ===> Targets
all:
	$(CXX) -I. -I$(SYSTEMC_HOME)/include -L. -L$(SYSTEMC_HOME)/lib-linux64 -lsystemc -lm -o sim $(input)

clean: 
	rm -rf ./*o ./sim
