
#include <systemc.h>
#include "mux16.h"


int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, b0, b1, b2, b3 ,b4 ,b5 ,b6 ,b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, select;
	sc_signal< sc_logic > s0, s1, s2, s3 ,s4, s5, s6 , s7, s8, s9, s10, s11, s12, s13, s14, s15, s16;

	mux16 mux1("mux1");
	mux1.a0(a0);
	mux1.b0(b0);
	mux1.a1(a1);
	mux1.b1(b1);	
	mux1.a2(a2);
	mux1.b2(b2);
	mux1.a3(a3);
	mux1.b3(b3);
	mux1.a4(a4);
	mux1.b4(b4);
	mux1.a5(a5);
	mux1.b5(b5);
	mux1.a6(a6);
	mux1.b6(b6);
	mux1.a7(a7);
	mux1.b7(b7);
	mux1.a8(a8);
	mux1.b8(b8);
	mux1.a9(a9);
	mux1.b9(b9);
	mux1.a10(a10);
	mux1.b10(b10);
	mux1.a11(a11);
	mux1.b11(b11);
	mux1.a12(a12);
	mux1.b12(b12);
	mux1.a13(a13);
	mux1.b13(b13);
	mux1.a14(a14);
	mux1.b14(b14);
	mux1.a15(a15);
	mux1.b15(b15);
	mux1.a16(a16);
	mux1.b16(b16);
	mux1.select(select);
	mux1.s0(s0);
	mux1.s1(s1);
	mux1.s2(s2);
	mux1.s3(s3);
	mux1.s4(s4);
	mux1.s5(s5);
	mux1.s6(s6);
	mux1.s7(s7);
	mux1.s8(s8);
	mux1.s9(s9);
	mux1.s10(s10);
	mux1.s11(s11);
	mux1.s12(s12);
	mux1.s13(s13);
	mux1.s14(s14);
	mux1.s15(s15);
	mux1.s16(s16);




        a0 = SC_LOGIC_1;  a1 = SC_LOGIC_1; a2 = SC_LOGIC_1; a3 = SC_LOGIC_1;  a4 = SC_LOGIC_1;  a5 = SC_LOGIC_1; a6 = SC_LOGIC_1; a7 = SC_LOGIC_1, a8 = SC_LOGIC_1;  a9 = SC_LOGIC_1; a10 = SC_LOGIC_1; a11 = SC_LOGIC_1;  a12 = SC_LOGIC_1;  a13 = SC_LOGIC_1; a14 = SC_LOGIC_1; a15 = SC_LOGIC_1; a16=SC_LOGIC_1;
        b0 = SC_LOGIC_0;  b1 = SC_LOGIC_1; b2 = SC_LOGIC_0; b3 = SC_LOGIC_0; b4 = SC_LOGIC_0;  b5 = SC_LOGIC_0; b6 = SC_LOGIC_0; b7= SC_LOGIC_0, b8 = SC_LOGIC_0;  b9 = SC_LOGIC_1; b10 = SC_LOGIC_0; b11 = SC_LOGIC_0; b12 = SC_LOGIC_0;  b13 = SC_LOGIC_0; b14 = SC_LOGIC_0; b15= SC_LOGIC_0, b16 = SC_LOGIC_0;

	select = SC_LOGIC_1;
        sc_start();
	std::cout<< "Sign=" << s16.read() << "\nOut= " << s15.read() << s14.read() << s13.read() << s12.read() << s11.read() << s10.read() << s9.read() << s8.read() << s7.read() << s6.read() << s5.read() << s3.read() << s2.read() << s1.read() << s0.read() << endl;
 }
