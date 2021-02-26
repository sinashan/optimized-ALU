#ifndef NOT2_H
#define NOT2_H
#include "systemc.h"

SC_MODULE(not_mux)
{
	sc_in< sc_bv<1> > a;
	sc_out< sc_bv<1> > out;
	
	void do_not()
	{
		out.write(~(a.read()));
	}

	SC_CTOR(not_mux)
	{
		SC_METHOD(do_not);
		sensitive << a;
	}
};
#endif
