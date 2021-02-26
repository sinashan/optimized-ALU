
#include <systemc.h>
#include "loop_sub.h"


int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, b0, b1, b2, b3;
	sc_signal< sc_logic > s0, s1, s2, s3, sign;

	loop_sub loop_sub1("loop_sub1");
	loop_sub1.a0(a0);
	loop_sub1.b0(b0);
	loop_sub1.a1(a1);
	loop_sub1.b1(b1);	
	loop_sub1.a2(a2);
	loop_sub1.b2(b2);
	loop_sub1.a3(a3);
	loop_sub1.b3(b3);
	loop_sub1.s0(s0);
	loop_sub1.s1(s1);
	loop_sub1.s2(s2);
	loop_sub1.s3(s3);
	loop_sub1.sign(sign);





        a0 = SC_LOGIC_0;  a1 = SC_LOGIC_0; a2 = SC_LOGIC_0; a3 = SC_LOGIC_0;
        b0 = SC_LOGIC_1;  b1 = SC_LOGIC_0; b2 = SC_LOGIC_0; b3 = SC_LOGIC_1;
        sc_start();
	std::cout<< "Output= " << s3.read() << s2.read() << s1.read() << s0.read() << " Sign= " << sign.read() << endl;
 }
