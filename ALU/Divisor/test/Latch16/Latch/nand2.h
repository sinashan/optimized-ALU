#ifndef NAND2_H
#define NAND2_H
#include "systemc.h"

SC_MODULE(nand2_gate)
{
	sc_in< sc_logic > a, b;
	sc_out< sc_logic > out;

	void do_nand()
	{	
		out.write(~(a.read() & b.read()));
	}

	SC_CTOR(nand2_gate)
	{
		SC_METHOD(do_nand);
		sensitive << a << b;
	}
};
#endif
