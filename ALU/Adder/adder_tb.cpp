
#include <systemc.h>
#include "adder.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11;
	sc_signal< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14;

	adder adder("adder");
	adder.a0(a0);
	adder.b0(b0);
	adder.a1(a1);
	adder.b1(b1);
	adder.a2(a2);
	adder.b2(b2);
	adder.a3(a3);
	adder.b3(b3);
	adder.a4(a4);
	adder.b4(b4);
	adder.a5(a5);
	adder.b5(b5);
	adder.a6(a6);
	adder.b6(b6);
	adder.a7(a7);
	adder.b7(b7);
	adder.a8(a8);
	adder.b8(b8);
	adder.a9(a9);
	adder.b9(b9);
	adder.a10(a10);
	adder.b10(b10);
	adder.a11(a11);
	adder.b11(b11);
	adder.s0(s0);
	adder.s1(s1);
	adder.s2(s2);
	adder.s3(s3);
	adder.s4(s4);
	adder.s5(s5);
	adder.s6(s6);
	adder.s7(s7);
	adder.s8(s8);
	adder.s9(s9);
	adder.s10(s10);
	adder.s11(s11);
	adder.s12(s12);
	adder.s13(s13);
	adder.s14(s14);



        a0 = SC_LOGIC_0;
        a1 = SC_LOGIC_0;
	a2 = SC_LOGIC_1;
	a3 = SC_LOGIC_0;
        a4 = SC_LOGIC_0;
        a5 = SC_LOGIC_0;                        
	a6 = SC_LOGIC_0;
	a7 = SC_LOGIC_0;
        a8 = SC_LOGIC_0;
        a9 = SC_LOGIC_0;
	a10 = SC_LOGIC_0;
	a11 = SC_LOGIC_0;


        b0 = SC_LOGIC_0;  
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


        sc_start(1,SC_NS);
	std::cout<<"Real Third Digit= " << s14.read() << "\nReal Second Digit= " << s13.read() << s12.read() << s11.read() << s10.read() << "\nReal First Digit= " << s8.read() << s7.read() << s6.read() << s5.read() << "\nImaginary First Digit = " << s4.read() << "\nImaginary Second Digit= " << s3.read() << s2.read() << s1.read() << s0.read() << endl;

 }
