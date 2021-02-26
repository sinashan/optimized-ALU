#ifndef XNOR_H
#define XNOR_H
#include "systemc.h"

SC_MODULE(xnor_gate)
{
	sc_in< sc_logic > a, b;
	sc_out< sc_logic > out;

	void do_xor()
	{	
		out.write(~(a.read() ^ b.read()));
	}

	SC_CTOR(xnor_gate)
	{
		SC_METHOD(do_xor);
		sensitive << a << b;
	}
};
#endif
