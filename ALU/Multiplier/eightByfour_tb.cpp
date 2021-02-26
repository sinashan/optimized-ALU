#include <systemc.h>
#include "eightByfour.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, b0, b1, b2, b3;
	sc_signal< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11;

	eightByfour eightByfour1("eightByfour1");
	eightByfour1.a0(a0);
	eightByfour1.a1(a1);
	eightByfour1.a2(a2);
	eightByfour1.a3(a3);
	eightByfour1.a4(a4);
	eightByfour1.a5(a5);
	eightByfour1.a6(a6);
	eightByfour1.a7(a7);
	eightByfour1.b0(b0);
	eightByfour1.b1(b1);
	eightByfour1.b2(b2);
	eightByfour1.b3(b3);
	eightByfour1.s0(s0);
	eightByfour1.s1(s1);
	eightByfour1.s2(s2);
	eightByfour1.s3(s3);
	eightByfour1.s4(s4);
	eightByfour1.s5(s5);
	eightByfour1.s6(s6);
	eightByfour1.s7(s7);
	eightByfour1.s8(s8);
	eightByfour1.s9(s9);
	eightByfour1.s10(s10);
	eightByfour1.s11(s11);




        a0 = SC_LOGIC_0;
        a1 = SC_LOGIC_0;
	a2 = SC_LOGIC_1;
	a3 = SC_LOGIC_0;
	a4 = SC_LOGIC_0;
        a5 = SC_LOGIC_1;
	a6 = SC_LOGIC_1;
	a7 = SC_LOGIC_0;
	
	b0 = SC_LOGIC_1;
        b1 = SC_LOGIC_0;
	b2 = SC_LOGIC_0;
        b3 = SC_LOGIC_1;
    
   

        sc_start(1,SC_NS);
	std::cout << "Third Digit= " << s11.read() << s10.read() << s9.read() << s8.read() << "\nSecond Digit = " << s7.read() << s6.read() << s5.read() << s4.read() << "\nFirst Digit= " << s3.read() << s2.read() << s1.read() << s0.read() << endl;

 }
