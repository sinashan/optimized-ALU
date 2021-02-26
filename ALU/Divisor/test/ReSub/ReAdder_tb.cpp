
#include <systemc.h>
#include "ReAdder.h"


int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15;
	sc_signal< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16;

	ReAdder ReAdder("ReAdder");
	ReAdder.a0(a0);
	ReAdder.b0(b0);
	ReAdder.a1(a1);
	ReAdder.b1(b1);
	ReAdder.a2(a2);
	ReAdder.b2(b2);
	ReAdder.a3(a3);
	ReAdder.b3(b3);
	ReAdder.a4(a4);
	ReAdder.b4(b4);
	ReAdder.a5(a5);
	ReAdder.b5(b5);
	ReAdder.a6(a6);
	ReAdder.b6(b6);
	ReAdder.a7(a7);
	ReAdder.b7(b7);
	ReAdder.a8(a8);
	ReAdder.b8(b8);
	ReAdder.a9(a9);
	ReAdder.b9(b9);
	ReAdder.a10(a10);
	ReAdder.b10(b10);
	ReAdder.a11(a11);
	ReAdder.b11(b11);
	ReAdder.a12(a12);
	ReAdder.b12(b12);
	ReAdder.a13(a13);
	ReAdder.b13(b13);
	ReAdder.a14(a14);
	ReAdder.b14(b14);
	ReAdder.a15(a15);
	ReAdder.b15(b15);
	ReAdder.s0(s0);
	ReAdder.s1(s1);
	ReAdder.s2(s2);
	ReAdder.s3(s3);
	ReAdder.s4(s4);
	ReAdder.s5(s5);
	ReAdder.s6(s6);
	ReAdder.s7(s7);
	ReAdder.s8(s8);
	ReAdder.s9(s9);
	ReAdder.s10(s10);
	ReAdder.s11(s11);
	ReAdder.s12(s12);
	ReAdder.s13(s13);
	ReAdder.s14(s14);
	ReAdder.s15(s15);
	ReAdder.s16(s16);



        a0 = SC_LOGIC_1;
        a1 = SC_LOGIC_0;
	a2 = SC_LOGIC_0;
	a3 = SC_LOGIC_0;
	a4 = SC_LOGIC_1;
        a5 = SC_LOGIC_0;
	a6 = SC_LOGIC_0;
	a7 = SC_LOGIC_0;
        a8 = SC_LOGIC_0;
        a9 = SC_LOGIC_0;
	a10 = SC_LOGIC_0;
	a11 = SC_LOGIC_0;
	a12 = SC_LOGIC_0;
        a13 = SC_LOGIC_0;
	a14 = SC_LOGIC_0;
	a15 = SC_LOGIC_0;

        b0 = SC_LOGIC_1;
        b1 = SC_LOGIC_0;
	b2 = SC_LOGIC_0;
	b3 = SC_LOGIC_0;
	b4 = SC_LOGIC_0;
        b5 = SC_LOGIC_0;
	b6 = SC_LOGIC_0;
	b7 = SC_LOGIC_0;
        b8 = SC_LOGIC_0;
        b9 = SC_LOGIC_0;
	b10 = SC_LOGIC_0;
	b11 = SC_LOGIC_0;
	b12 = SC_LOGIC_0;
        b13 = SC_LOGIC_0;
	b14 = SC_LOGIC_0;
	b15 = SC_LOGIC_0;


        sc_start(1,SC_NS);
	std::cout<< s16.read() << " " << s15.read() << s14.read() << s13.read() << s12.read() << s11.read() << s10.read() << s9.read() << s8.read() << s7.read() << s6.read() << s5.read() << s4.read() << s3.read() << s2.read() << s1.read() << s0.read() << endl;

 }
