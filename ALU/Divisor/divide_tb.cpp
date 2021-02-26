
#include <systemc.h>
#include "divide.h"


int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15;
	sc_signal< sc_lv<32> > s;
	

	divide d1("d1");
	d1.a0(a0);
	d1.a1(a1);
	d1.a2(a2);
	d1.a3(a3);
	d1.a4(a4);
	d1.a5(a5);
	d1.a6(a6);
	d1.a7(a7);
	d1.a8(a8);
	d1.a9(a9);
	d1.a10(a10);
	d1.a11(a11);
	d1.a12(a12);
	d1.a13(a13);
	d1.a14(a14);
	d1.a15(a15);


	d1.b0(b0);
	d1.b1(b1);
	d1.b2(b2);
	d1.b3(b3);
	d1.b4(b4);
	d1.b5(b5);
	d1.b6(b6);
	d1.b7(b7);
	d1.b8(b8);
	d1.b9(b9);
	d1.b10(b10);
	d1.b11(b11);
	d1.b12(b12);
	d1.b13(b13);
	d1.b14(b14);
	d1.b15(b15);

	d1.s(s);



	
	a0 = SC_LOGIC_1;
        a1 = SC_LOGIC_0;
	a2 = SC_LOGIC_0;
	a3 = SC_LOGIC_0;
	a4 = SC_LOGIC_0;
        a5 = SC_LOGIC_0;
	a6 = SC_LOGIC_0;
	a7 = SC_LOGIC_0;
	a8 = SC_LOGIC_1;
        a9 = SC_LOGIC_1;
	a10 = SC_LOGIC_0;
	a11 = SC_LOGIC_0;
	a12 = SC_LOGIC_0;
        a13 = SC_LOGIC_0;
	a14 = SC_LOGIC_0;
	a15 = SC_LOGIC_0;


	
	b0 = SC_LOGIC_0;
        b1 = SC_LOGIC_0;
	b2 = SC_LOGIC_1;
        b3 = SC_LOGIC_0;
	b4 = SC_LOGIC_0;
        b5 = SC_LOGIC_0;
	b6 = SC_LOGIC_0;
	b7 = SC_LOGIC_0;
	b8 = SC_LOGIC_1;
        b9 = SC_LOGIC_1;
	b10 = SC_LOGIC_0;
	b11 = SC_LOGIC_0;
	b12 = SC_LOGIC_0;
        b13 = SC_LOGIC_0;
	b14 = SC_LOGIC_0;
	b15 = SC_LOGIC_0;

       
    
        sc_start();
	std::cout<< "Output= " << s.read() << endl;
 }
