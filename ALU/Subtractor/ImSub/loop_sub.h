#include "systemc.h"
#include "ImSub.h"
SC_MODULE(loop_sub)
{
	sc_inout< sc_logic > a0, a1, a2, a3, b0, b1, b2, b3;
	sc_inout< sc_logic > s0, s1, s2, s3, sign;
//----------Local Variables-------
	ImSub subtractor1, subtractor2;

	sc_signal< sc_logic > sub0, sub1, sub2, sub3, sign1;

	void out_write()
	{
		cout << sign.read() << endl;
	}
	
	SC_CTOR(loop_sub) : subtractor1("SUB1"), subtractor2("SUB2")
	{
		subtractor1 << b0 << b1 << b2 << b3 << a0 << a1 << a2 << a3 << sub0 << sub1 << sub2 << sub3 << sign;
		subtractor2 << b0 << b1 << b2 << b3 << sub0 << sub1 << sub2 << sub3 << a0 << a1 << a2 << a3 << sign1;
		

	
		SC_METHOD(out_write);
		sensitive << sign;		
	}
};
