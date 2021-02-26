#include <systemc.h>
#include "eightByeight.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, b0, b1, b2, b3, b4, b5, b6, b7;
	sc_signal< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15;

	eightByeight eightByeight1("eightByeight1");
	eightByeight1.a0(a0);
	eightByeight1.a1(a1);
	eightByeight1.a2(a2);
	eightByeight1.a3(a3);
	eightByeight1.a4(a4);
	eightByeight1.a5(a5);
	eightByeight1.a6(a6);
	eightByeight1.a7(a7);
	eightByeight1.b0(b0);
	eightByeight1.b1(b1);
	eightByeight1.b2(b2);
	eightByeight1.b3(b3);
	eightByeight1.b4(b4);
	eightByeight1.b5(b5);
	eightByeight1.b6(b6);
	eightByeight1.b7(b7);
	eightByeight1.s0(s0);
	eightByeight1.s1(s1);
	eightByeight1.s2(s2);
	eightByeight1.s3(s3);
	eightByeight1.s4(s4);
	eightByeight1.s5(s5);
	eightByeight1.s6(s6);
	eightByeight1.s7(s7);
	eightByeight1.s8(s8);
	eightByeight1.s9(s9);
	eightByeight1.s10(s10);
	eightByeight1.s11(s11);
	eightByeight1.s12(s12);
	eightByeight1.s13(s13);
	eightByeight1.s14(s14);
	eightByeight1.s15(s15);





        a0 = SC_LOGIC_0;
        a1 = SC_LOGIC_0;
	a2 = SC_LOGIC_1;
	a3 = SC_LOGIC_0;
	a4 = SC_LOGIC_0;
        a5 = SC_LOGIC_0;
	a6 = SC_LOGIC_0;
	a7 = SC_LOGIC_0;

	
	b0 = SC_LOGIC_0;
        b1 = SC_LOGIC_1;
	b2 = SC_LOGIC_1;
        b3 = SC_LOGIC_0;
	b4 = SC_LOGIC_0;
        b5 = SC_LOGIC_0;
	b6 = SC_LOGIC_0;
        b7 = SC_LOGIC_0;

    //s16 is not needed!
   

        sc_start(1,SC_NS);
	std::cout << "Fourth Digit= " << s15.read() << s14.read() << s13.read() << s12.read() << "\nThird Digit= " << s11.read() << s10.read() << s9.read() << s8.read() << "\nSecond Digit = " << s7.read() << s6.read() << s5.read() << s4.read() << "\nFirst Digit= " << s3.read() << s2.read() << s1.read() << s0.read() << endl;

 }
