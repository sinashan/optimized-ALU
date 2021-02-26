
#include <systemc.h>
#include "ImAdder.h"


int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, b0, b1, b2, b3;
	sc_signal< sc_logic > s0, s1, s2, s3, s4, cout;

	ImAdder ImAdder("ImAdder");
	ImAdder.a0(a0);
	ImAdder.b0(b0);
	ImAdder.a1(a1);
	ImAdder.b1(b1);
	ImAdder.a2(a2);
	ImAdder.b2(b2);
	ImAdder.a3(a3);
	ImAdder.b3(b3);
	ImAdder.s0(s0);
	ImAdder.s1(s1);
	ImAdder.s2(s2);
	ImAdder.s3(s3);
	ImAdder.s4(s4);



        a0 = SC_LOGIC_1;  a1 = SC_LOGIC_1; a2 = SC_LOGIC_1; a3 = SC_LOGIC_0;
        b0 = SC_LOGIC_1;  b1 = SC_LOGIC_0; b2 = SC_LOGIC_1; b3 = SC_LOGIC_0;
        sc_start(1,SC_NS);
	std::cout<<"@" << sc_time_stamp() <<" :: Adder Out= "<< s4.read() << s3.read() << s2.read() << s1.read() << s0.read() << endl;

 }
