#ifndef ADD_H
#define ADD_H
#include "systemc.h"
#include "ReAdder/ReAdder.h"
#include "ImAdder/ImAdder.h"

SC_MODULE(adder)
{
	sc_in< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11;
	sc_out< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14;
//------------Local Variables Here---------------------
	ReAdder ReAdder1;
	ImAdder ImAdder1;

	void add()
	{
	}

	SC_CTOR(adder) : ReAdder1("REAL"), ImAdder1("IMAGINARY")
	{
		ImAdder1 << a0 << a1 << a2 << a3 << b0 << b1 << b2 << b3 << s0 << s1 << s2 << s3 << s4;
		ReAdder1 << a4 << a5 << a6 << a7 << a8 << a9 << a10 << a11 << b4 << b5 << b6 << b7 << b8 << b9 << b10 << b11 << s5 << s6 << s7 << s8 << s9 << s10 << s11 << s12 << s13 << s14;
		SC_METHOD(add);
		sensitive << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << a8 << a9 << a10 << a11 << b0 << b1 << b2 << b3 << b4 << b5 << b6 << b7 << b8 << b9 << b10 << b11;
	}
};
#endif
