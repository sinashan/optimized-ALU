#ifndef OR1_H
#define OR1_H
#include "systemc.h"

SC_MODULE(or2_gate)
{
	sc_in< sc_logic > a, b;
	sc_out< sc_logic > out;

	void do_or()
	{
		out.write(a.read() | b.read());
	}

	SC_CTOR(or2_gate)
	{
		SC_METHOD(do_or);
		sensitive << a << b;
	}
};
#endif
