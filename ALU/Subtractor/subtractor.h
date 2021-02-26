#ifndef SUB_H
#define SUB_H
#include "systemc.h"
#include "ReSub/ReSub.h"
#include "ImSub/ImSub.h"

SC_MODULE(subtractor)
{
	sc_in< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11;
	sc_out< sc_logic > s0, s1, s2, s3, signIm, s5, s6, s7, s8, s9, s10, s11, s12, s13, signRe;
//------------Local Variables Here---------------------
	ReSub ReSub1;
	ImSub ImSub1;
	

	void sub()
	{

	}

	SC_CTOR(subtractor) : ReSub1("REAL"), ImSub1("IMAGINARY")
	{
		ImSub1 << a0 << a1 << a2 << a3 << b0 << b1 << b2 << b3 << s0 << s1 << s2 << s3 << signIm;
		ReSub1 << a4 << a5 << a6 << a7 << a8 << a9 << a10 << a11 << b4 << b5 << b6 << b7 << b8 << b9 << b10 << b11 << s5 << s6 << s7 << s8 << s9 << s10 << s11 << s12 << s13 << signRe;

		SC_METHOD(sub);
		sensitive << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << a8 << a9 << a10 << a11 << b0 << b1 << b2 << b3 << b4 << b5 << b6 << b7 << b8 << b9 << b10 << b11;
	}
};
#endif
