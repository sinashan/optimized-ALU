#include <systemc.h>
#include "FourDigitAdder.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15;
	sc_signal< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16;

	FourDigitAdder FourDigitAdder1("FourDigitAdder1");
	FourDigitAdder1.a0(a0);
	FourDigitAdder1.a1(a1);
	FourDigitAdder1.a2(a2);
	FourDigitAdder1.a3(a3);
	FourDigitAdder1.a4(a4);
	FourDigitAdder1.a5(a5);
	FourDigitAdder1.a6(a6);
	FourDigitAdder1.a7(a7);
	FourDigitAdder1.a8(a8);
	FourDigitAdder1.a9(a9);
	FourDigitAdder1.a10(a10);
	FourDigitAdder1.a11(a11);
	FourDigitAdder1.a12(a12);
	FourDigitAdder1.a13(a13);
	FourDigitAdder1.a14(a14);
	FourDigitAdder1.a15(a15);
	FourDigitAdder1.b0(b0);
	FourDigitAdder1.b1(b1);
	FourDigitAdder1.b2(b2);
	FourDigitAdder1.b3(b3);
	FourDigitAdder1.b4(b4);
	FourDigitAdder1.b5(b5);
	FourDigitAdder1.b6(b6);
	FourDigitAdder1.b7(b7);
	FourDigitAdder1.b8(b8);
	FourDigitAdder1.b9(b9);
	FourDigitAdder1.b10(b10);
	FourDigitAdder1.b11(b11);
	FourDigitAdder1.b12(b12);
	FourDigitAdder1.b13(b13);
	FourDigitAdder1.b14(b14);
	FourDigitAdder1.b15(b15);
	FourDigitAdder1.s0(s0);
	FourDigitAdder1.s1(s1);
	FourDigitAdder1.s2(s2);
	FourDigitAdder1.s3(s3);
	FourDigitAdder1.s4(s4);
	FourDigitAdder1.s5(s5);
	FourDigitAdder1.s6(s6);
	FourDigitAdder1.s7(s7);
	FourDigitAdder1.s8(s8);
	FourDigitAdder1.s9(s9);
	FourDigitAdder1.s10(s10);
	FourDigitAdder1.s11(s11);
	FourDigitAdder1.s12(s12);
	FourDigitAdder1.s13(s13);
	FourDigitAdder1.s14(s14);
	FourDigitAdder1.s15(s15);
	FourDigitAdder1.s16(s16);




        a0 = SC_LOGIC_0;
        a1 = SC_LOGIC_1;
	a2 = SC_LOGIC_0;
	a3 = SC_LOGIC_0;
	a4 = SC_LOGIC_1;
        a5 = SC_LOGIC_0;
	a6 = SC_LOGIC_0;
	a7 = SC_LOGIC_1;
	a8 = SC_LOGIC_0;
        a9 = SC_LOGIC_0;
	a10 = SC_LOGIC_0;
	a11 = SC_LOGIC_1;
	a12 = SC_LOGIC_0;
	a13 = SC_LOGIC_1;
	a14 = SC_LOGIC_1;
	a15 = SC_LOGIC_0;
	
	b0 = SC_LOGIC_1;
        b1 = SC_LOGIC_0;
	b2 = SC_LOGIC_1;
        b3 = SC_LOGIC_0;
	b4 = SC_LOGIC_1;
        b5 = SC_LOGIC_0;
	b6 = SC_LOGIC_0;
        b7 = SC_LOGIC_0;
	b8 = SC_LOGIC_1;
        b9 = SC_LOGIC_1;
	b10 = SC_LOGIC_1;
        b11 = SC_LOGIC_0;
        b12 = SC_LOGIC_1;
        b13 = SC_LOGIC_0;
        b14 = SC_LOGIC_1;
        b15 = SC_LOGIC_0;

    
   

        sc_start(1,SC_NS);
	std::cout <<  "Fifth Digit= " << s16.read() << "\nFourth Digit= " << s15.read() << s14.read() << s13.read() << s12.read() << "\nThird Digit= " << s11.read() << s10.read() << s9.read() << s8.read() << "\nSecond Digit = " << s7.read() << s6.read() << s5.read() << s4.read() << "\nFirst Digit= " << s3.read() << s2.read() << s1.read() << s0.read() << endl;

 }
