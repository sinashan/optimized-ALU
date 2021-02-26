#ifndef AND2_H
#define AND2_H
#include "systemc.h"

SC_MODULE(and_mux)
{
	sc_in< sc_logic > a;
	sc_in< sc_bv<1> > b;
	sc_out< sc_logic > out;

	void do_and()
	{	
		out.write(a.read() & b.read()[0]);
	}

	SC_CTOR(and_mux)
	{
		SC_METHOD(do_and);
		sensitive << a << b;
	}
};
#endif
