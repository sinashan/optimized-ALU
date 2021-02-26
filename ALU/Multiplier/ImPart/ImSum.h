#ifndef IMSUM_H
#define IMSUM_H
#include "systemc.h"
#include "../ThreeDigitAdder.h"

SC_MODULE(ImSum)
{
	sc_in< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11;
	sc_out< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12;
//-------------Local Variables---------------
	ThreeDigitAdder three1;

	
	SC_CTOR(ImSum) : three1("THREE1")
	{
		three1 << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << a8 << a9 << a10 << a11 << b0 << b1 << b2 << b3 << b4 << b5 << b6 << b7 << b8 << b9 << b10 << b11 << s0 << s1 << s2 << s3 << s4 << s5 << s6 << s7 << s8 << s9 << s10 << s11 << s12;
	}
};
#endif
