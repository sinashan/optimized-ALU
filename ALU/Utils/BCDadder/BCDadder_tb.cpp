
#include <systemc.h>
#include "BCDadder.h"


int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, b0, b1, b2, b3, cin;
	sc_signal< sc_logic > s0, s1, s2, s3, s4, cout;

	BCDadder BCDadder("BCDadder");
	BCDadder.a0(a0);
	BCDadder.b0(b0);
	BCDadder.a1(a1);
	BCDadder.b1(b1);
	BCDadder.a2(a2);
	BCDadder.b2(b2);
	BCDadder.a3(a3);
	BCDadder.b3(b3);
	BCDadder.cin(cin);
	BCDadder.sum0(s0);
	BCDadder.sum1(s1);
	BCDadder.sum2(s2);
	BCDadder.sum3(s3);
	BCDadder.sum4(s4);
	BCDadder.cout(cout);




        a0 = SC_LOGIC_0;  a1 = SC_LOGIC_0; a2 = SC_LOGIC_0; a3 = SC_LOGIC_1;
        b0 = SC_LOGIC_0;  b1 = SC_LOGIC_0; b2 = SC_LOGIC_0; b3 = SC_LOGIC_1;
        sc_start(1,SC_NS);
	std::cout<<"@" << sc_time_stamp() <<" :: Adder Out= "<< s4.read() << s3.read() << s2.read() << s1.read() << s0.read() << endl;

 }
