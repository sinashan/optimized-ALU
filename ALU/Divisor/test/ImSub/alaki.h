#ifndef ALAKI_H
#define ALAKI_H
#include "systemc.h"

SC_MODULE(alaki)
{
	sc_in< sc_logic > in;
	sc_out< sc_logic > out;

	void do_alaki()
	{
		out.write(in);
	}

	SC_CTOR(alaki)
	{
		SC_METHOD(do_alaki);
		sensitive << in;		
	}
};
#endif
