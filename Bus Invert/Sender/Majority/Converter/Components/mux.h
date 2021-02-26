#ifndef MUX_H
#define MUX_H
#include "systemc.h"
#include "and.h"
#include "or2.h"
#include "not.h"

SC_MODULE(mux)
{
	sc_in< sc_logic > a, b, select;
	sc_out< sc_logic > out;
//..................Local Variables.....................
	and_gate and1, and2;
	not_gate not1;
	or2_gate or1;
	sc_signal< sc_logic > not_out, and1out, and2out;

	SC_CTOR(mux) : and1("AND1"), and2("AND2"), not1("NOT1"), or1("OR1")
	{
		not1 << select << not_out;
		and1 << a << not_out << and1out;
		and2 << b << select << and2out;
		or1 << and1out << and2out << out;
	}
};
#endif
