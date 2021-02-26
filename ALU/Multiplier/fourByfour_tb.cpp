
#include <systemc.h>
#include "fourByfour.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, b0, b1, b2, b3;
	sc_signal< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7;

	fourByfour fourByfour1("fourByfour1");
	fourByfour1.a0(a0);
	fourByfour1.a1(a1);
	fourByfour1.a2(a2);
	fourByfour1.a3(a3);
	fourByfour1.b0(b0);
	fourByfour1.b1(b1);
	fourByfour1.b2(b2);
	fourByfour1.b3(b3);
	fourByfour1.s0(s0);
	fourByfour1.s1(s1);
	fourByfour1.s2(s2);
	fourByfour1.s3(s3);
	fourByfour1.s4(s4);
	fourByfour1.s5(s5);
	fourByfour1.s6(s6);
	fourByfour1.s7(s7);




        a0 = SC_LOGIC_1;
        a1 = SC_LOGIC_1;
	a2 = SC_LOGIC_1;
	a3 = SC_LOGIC_0;
	
	b0 = SC_LOGIC_1;
        b1 = SC_LOGIC_1;
	b2 = SC_LOGIC_1;
        b3 = SC_LOGIC_0;
    
   

        sc_start(1,SC_NS);
	std::cout << "Second Digit = "  << s7.read() << s6.read() << s5.read() << s4.read() << "\nFirst Digit= " << s3.read() << s2.read() << s1.read() << s0.read() << endl;

 }
