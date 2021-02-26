
#include <systemc.h>
#include "subtractor.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11;
	sc_signal< sc_logic > s0, s1, s2, s3, signIm, s5, s6, s7, s8, s9, s10, s11, s12, s13, signRe;

	subtractor subtractor1("subtractor1");
	subtractor1.a0(a0);
	subtractor1.b0(b0);
	subtractor1.a1(a1);
	subtractor1.b1(b1);
	subtractor1.a2(a2);
	subtractor1.b2(b2);
	subtractor1.a3(a3);
	subtractor1.b3(b3);
	subtractor1.a4(a4);
	subtractor1.b4(b4);
	subtractor1.a5(a5);
	subtractor1.b5(b5);
	subtractor1.a6(a6);
	subtractor1.b6(b6);
	subtractor1.a7(a7);
	subtractor1.b7(b7);
	subtractor1.a8(a8);
	subtractor1.b8(b8);
	subtractor1.a9(a9);
	subtractor1.b9(b9);
	subtractor1.a10(a10);
	subtractor1.b10(b10);
	subtractor1.a11(a11);
	subtractor1.b11(b11);
	subtractor1.s0(s0);
	subtractor1.s1(s1);
	subtractor1.s2(s2);
	subtractor1.s3(s3);
	subtractor1.signIm(signIm);
	subtractor1.s5(s5);
	subtractor1.s6(s6);
	subtractor1.s7(s7);
	subtractor1.s8(s8);
	subtractor1.s9(s9);
	subtractor1.s10(s10);
	subtractor1.s11(s11);
	subtractor1.s12(s12);
	subtractor1.s13(s13);
	subtractor1.signRe(signRe);




        a0 = SC_LOGIC_0;
        a1 = SC_LOGIC_1;
	a2 = SC_LOGIC_0;
	a3 = SC_LOGIC_0;
        a4 = SC_LOGIC_1;
        a5 = SC_LOGIC_1;                        
	a6 = SC_LOGIC_0;
	a7 = SC_LOGIC_0;
        a8 = SC_LOGIC_0;
        a9 = SC_LOGIC_1;
	a10 = SC_LOGIC_0;
	a11 = SC_LOGIC_0;


        b0 = SC_LOGIC_0;  
	b1 = SC_LOGIC_0; 
	b2 = SC_LOGIC_1; 
	b3 = SC_LOGIC_0;
        b4 = SC_LOGIC_0;  
	b5 = SC_LOGIC_0; 
	b6 = SC_LOGIC_0; 
	b7 = SC_LOGIC_1;
        b8 = SC_LOGIC_1;  
	b9 = SC_LOGIC_0; 
	b10 = SC_LOGIC_0; 
	b11 = SC_LOGIC_0;


        sc_start(1,SC_NS);
	std::cout<<"Real Sign= " << signRe.read() << "\nReal Second Digit= " << s12.read() << s11.read() << s10.read() << "\nReal First Digit= " << s8.read() << s7.read() << s6.read() << s5.read() << "\n\nImaginary Sign = " << signIm.read() << "\nImaginary Second Digit= " << s3.read() << s2.read() << s1.read() << s0.read() << endl;

 }
