
#include <systemc.h>
#include "converter.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6;
	sc_signal< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7;

	converter converter1("converter1");
	converter1.a0(a0);
	converter1.a1(a1);
	converter1.a2(a2);
	converter1.a3(a3);
	converter1.a4(a4);
	converter1.a5(a5);
	converter1.a6(a6);
	converter1.s0(s0);
	converter1.s1(s1);
	converter1.s2(s2);
	converter1.s3(s3);
	converter1.s4(s4);
	converter1.s5(s5);
	converter1.s6(s6);
	converter1.s7(s7);




        a0 = SC_LOGIC_1;
        a1 = SC_LOGIC_0;
	a2 = SC_LOGIC_0;
	a3 = SC_LOGIC_0;
        a4 = SC_LOGIC_1;
	a5 = SC_LOGIC_0;
        a6 = SC_LOGIC_1;
    
   

        sc_start(1,SC_NS);
	std::cout << "Second Digit = " << s7.read() << s6.read() << s5.read() << s4.read() << "\nFirst Digit= " << s3.read() << s2.read() << s1.read() << s0.read() << endl;

 }
