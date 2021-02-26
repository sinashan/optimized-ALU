
#include <systemc.h>
#include "RePart.h"


int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15;
	sc_signal< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, sign;

	RePart RePart1("RePart1");
	RePart1.a0(a0);
	RePart1.b0(b0);
	RePart1.a1(a1);
	RePart1.b1(b1);	
	RePart1.a2(a2);
	RePart1.b2(b2);
	RePart1.a3(a3);
	RePart1.b3(b3);
	RePart1.a4(a4);
	RePart1.b4(b4);
	RePart1.a5(a5);
	RePart1.b5(b5);
	RePart1.a6(a6);
	RePart1.b6(b6);
	RePart1.a7(a7);
	RePart1.b7(b7);
	RePart1.a8(a8);
	RePart1.b8(b8);
	RePart1.a9(a9);
	RePart1.b9(b9);
	RePart1.a10(a10);
	RePart1.b10(b10);
	RePart1.a11(a11);
	RePart1.b11(b11);
	RePart1.a12(a12);
	RePart1.b12(b12);
	RePart1.a13(a13);
	RePart1.b13(b13);
	RePart1.a14(a14);
	RePart1.b14(b14);
	RePart1.a15(a15);
	RePart1.b15(b15);

	RePart1.s0(s0);
	RePart1.s1(s1);
	RePart1.s2(s2);
	RePart1.s3(s3);
	RePart1.s4(s4);
	RePart1.s5(s5);
	RePart1.s6(s6);
	RePart1.s7(s7);
	RePart1.s8(s8);
	RePart1.s9(s9);
	RePart1.s10(s10);
	RePart1.s11(s11);
	RePart1.s12(s12);
	RePart1.s13(s13);
	RePart1.s14(s14);
	RePart1.s15(s15);
	RePart1.sign(sign);




       
        a0 = SC_LOGIC_1;
        a1 = SC_LOGIC_0;
	a2 = SC_LOGIC_0;
	a3 = SC_LOGIC_0;
	a4 = SC_LOGIC_0;
        a5 = SC_LOGIC_1;
	a6 = SC_LOGIC_1;
	a7 = SC_LOGIC_0;
	a8 = SC_LOGIC_1;
        a9 = SC_LOGIC_0;
	a10 = SC_LOGIC_1;
	a11 = SC_LOGIC_0;
	a12 = SC_LOGIC_0;
	a13 = SC_LOGIC_0;
	a14 = SC_LOGIC_0;
	a15 = SC_LOGIC_0;
	
	b0 = SC_LOGIC_0;
        b1 = SC_LOGIC_0;
	b2 = SC_LOGIC_1;
        b3 = SC_LOGIC_0;
	b4 = SC_LOGIC_1;
        b5 = SC_LOGIC_0;
	b6 = SC_LOGIC_1;
        b7 = SC_LOGIC_0;
	b8 = SC_LOGIC_0;
        b9 = SC_LOGIC_0;
	b10 = SC_LOGIC_0;
        b11 = SC_LOGIC_1;
        b12 = SC_LOGIC_0;
        b13 = SC_LOGIC_0;
        b14 = SC_LOGIC_0;
        b15 = SC_LOGIC_0;

        sc_start();
	std::cout<<"Sign= " << sign.read() << "\nFourth Digit= " << s15.read() << s14.read() << s13.read() << s12.read() << "\nThird Digit= " << s11.read() << s10.read() << s9.read() << s8.read() << "\nSeoncd Digit= " << s7.read() << s6.read() << s5.read() << s4.read() << "\nFirst Digit= " << s3.read() << s2.read() << s1.read() << s0.read() << endl;
 }
