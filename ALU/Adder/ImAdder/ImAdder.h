#ifndef ImAdder_H
#define ImAdder_H
#include "systemc.h"
#include "../../Utils/Misc./BCDadder/BCDadder.h"

SC_MODULE(ImAdder)
{
	sc_in< sc_logic > a0, a1, a2, a3, b0, b1, b2, b3;
	sc_out< sc_logic > s0, s1, s2, s3, s4;
//------------Local Variables Here---------------------
	BCDadder adder1;
	sc_signal< sc_logic > carry1, carry2;

	void im_add()
	{
		carry1 = SC_LOGIC_0;
	}

	SC_CTOR(ImAdder) : adder1("ADD")
	{
		adder1 << a0 << a1 << a2 << a3 << b0 << b1 << b2 << b3 << carry1 << s0 << s1 << s2 << s3 << carry2 << s4;
		SC_METHOD(im_add);
		sensitive << a0 << a1 << a2 << a3 << b0 << b1 << b2 << b3;
	}	
};
#endif
