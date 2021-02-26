#ifndef OR_H
#define OR_H
#include "systemc.h"

SC_MODULE(or_gate)
{
	sc_in< sc_logic > a, b, c;
	sc_out< sc_logic > out;

	void do_or()
	{
		out.write(a.read() | b.read() | c.read());
	}

	SC_CTOR(or_gate)
	{
		SC_METHOD(do_or);
		sensitive << a << b << c;
	}
};
#endif
