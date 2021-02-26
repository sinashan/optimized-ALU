
#include <systemc.h>
#include "ReAdder.h"


int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, b0, b1, b2, b3, b4, b5, b6, b7;
	sc_signal< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9;

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



        a0 = SC_LOGIC_0;  a1 = SC_LOGIC_0; a2 = SC_LOGIC_0; a3 = SC_LOGIC_0;  a4 = SC_LOGIC_0;  a5 = SC_LOGIC_0; a6 = SC_LOGIC_0; a7 = SC_LOGIC_0;
        b0 = SC_LOGIC_0;  b1 = SC_LOGIC_1; b2 = SC_LOGIC_0; b3 = SC_LOGIC_0; b4 = SC_LOGIC_0;  b5 = SC_LOGIC_0; b6 = SC_LOGIC_0; b7= SC_LOGIC_0;
        sc_start(1,SC_NS);
	std::cout<< "Third Digit= " <<  s9.read() << "\nSecond Digit= " << s8.read() << s7.read() << s6.read() << s5.read() << "\nFirst Digit= " << s3.read() << s2.read() << s1.read() << s0.read() << endl;

 }
