#ifndef AND1_H
#define AND1_H
#include "systemc.h"

SC_MODULE(and_gate)
{
	sc_in< sc_logic > a, b;
	sc_out< sc_logic > out;

	void do_and()
	{	
		out.write(a.read() & b.read());
	}

	SC_CTOR(and_gate)
	{
		SC_METHOD(do_and);
		sensitive << a << b;
	}
};
#endif
