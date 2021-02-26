#ifndef NOT_H
#define NOT_H
#include "systemc.h"

SC_MODULE(not_gate)
{
	sc_in< sc_logic > a;
	sc_out< sc_logic > out;
	
	void do_not()
	{
		out.write(~(a.read()));
	}

	SC_CTOR(not_gate)
	{
		SC_METHOD(do_not);
		sensitive << a;
	}
};
#endif
