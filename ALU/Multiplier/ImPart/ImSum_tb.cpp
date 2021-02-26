
#include <systemc.h>
#include "ImSum.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11;
	sc_signal< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12;

	ImSum ImSum1("ImSum1");
	ImSum1.a0(a0);
	ImSum1.a1(a1);
	ImSum1.a2(a2);
	ImSum1.a3(a3);
	ImSum1.a4(a4);
	ImSum1.a5(a5);
	ImSum1.a6(a6);
	ImSum1.a7(a7);
	ImSum1.a8(a8);
	ImSum1.a9(a9);
	ImSum1.a10(a10);
	ImSum1.a11(a11);
	ImSum1.b0(b0);
	ImSum1.b1(b1);
	ImSum1.b2(b2);
	ImSum1.b3(b3);
	ImSum1.b4(b4);
	ImSum1.b5(b5);
	ImSum1.b6(b6);
	ImSum1.b7(b7);
	ImSum1.b8(b8);
	ImSum1.b9(b9);
	ImSum1.b10(b10);
	ImSum1.b11(b11);
	ImSum1.s0(s0);
	ImSum1.s1(s1);
	ImSum1.s2(s2);
	ImSum1.s3(s3);
	ImSum1.s4(s4);
	ImSum1.s5(s5);
	ImSum1.s6(s6);
	ImSum1.s7(s7);
	ImSum1.s8(s8);
	ImSum1.s9(s9);
	ImSum1.s10(s10);
	ImSum1.s11(s11);
	ImSum1.s12(s12);




        a0 = SC_LOGIC_0;
        a1 = SC_LOGIC_0;
	a2 = SC_LOGIC_0;
	a3 = SC_LOGIC_1;
	a4 = SC_LOGIC_1;
        a5 = SC_LOGIC_0;
	a6 = SC_LOGIC_0;
	a7 = SC_LOGIC_0;
	a8 = SC_LOGIC_0;
	a9 = SC_LOGIC_0;
	a10 = SC_LOGIC_1;
	a11 = SC_LOGIC_0;

        b0 = SC_LOGIC_0;
        b1 = SC_LOGIC_0;
	b2 = SC_LOGIC_1;
	b3 = SC_LOGIC_0;
	b4 = SC_LOGIC_0;
        b5 = SC_LOGIC_1;
	b6 = SC_LOGIC_1;
	b7 = SC_LOGIC_0;
	b8 = SC_LOGIC_1;
        b9 = SC_LOGIC_0;
	b10 = SC_LOGIC_0;
        b11 = SC_LOGIC_1;
    
   

        sc_start(1,SC_NS);
	std::cout << "Fourth Digit = "  << s12.read() << "\nThird Digit= " << s11.read() << s10.read() << s9.read() << s8.read() << "\nSecond Digit = " << s7.read() << s6.read() << s5.read() << s4.read() << "\nFirst Digit= " << s3.read() << s2.read() << s1.read() << s0.read() << endl;

 }
