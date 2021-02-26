
#include <systemc.h>
#include "ReSub.h"


int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, b0, b1, b2, b3, b4, b5, b6, b7;
	sc_signal< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, sign;

	ReSub ReSub1("ReSub1");
	ReSub1.a0(a0);
	ReSub1.b0(b0);
	ReSub1.a1(a1);
	ReSub1.b1(b1);	
	ReSub1.a2(a2);
	ReSub1.b2(b2);
	ReSub1.a3(a3);
	ReSub1.b3(b3);
	ReSub1.a4(a4);
	ReSub1.b4(b4);
	ReSub1.a5(a5);
	ReSub1.b5(b5);
	ReSub1.a6(a6);
	ReSub1.b6(b6);
	ReSub1.a7(a7);
	ReSub1.b7(b7);
	ReSub1.s0(s0);
	ReSub1.s1(s1);
	ReSub1.s2(s2);
	ReSub1.s3(s3);
	ReSub1.s4(s4);
	ReSub1.s5(s5);
	ReSub1.s6(s6);
	ReSub1.s7(s7);
	ReSub1.s8(s8);
	ReSub1.sign(sign);




        a0 = SC_LOGIC_0;  a1 = SC_LOGIC_1; a2 = SC_LOGIC_0; a3 = SC_LOGIC_0;  a4 = SC_LOGIC_1;  a5 = SC_LOGIC_1; a6 = SC_LOGIC_0; a7 = SC_LOGIC_0;
        b0 = SC_LOGIC_0;  b1 = SC_LOGIC_1; b2 = SC_LOGIC_1; b3 = SC_LOGIC_0; b4 = SC_LOGIC_1;  b5 = SC_LOGIC_0; b6 = SC_LOGIC_0; b7= SC_LOGIC_0;
        sc_start();
	std::cout<< "Sign= " << sign.read() << "\nSecond Digit= " << s8.read() << s7.read() << s6.read() << s5.read() << "\nFirst Digit= " << s3.read() << s2.read() << s1.read() << s0.read() << endl;
 }
