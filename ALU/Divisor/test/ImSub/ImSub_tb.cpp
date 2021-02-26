
#include <systemc.h>
#include "ImSub.h"


int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_lv<4> > a, b, s;
	sc_signal< sc_logic > sign;
	sc_signal< sc_bv<1> > enable;

	ImSub ImSub1("ImSub1");
	ImSub1.a(a);
	ImSub1.b(b);
	ImSub1.s(s);
	ImSub1.sign(sign);
	ImSub1.enable(enable);





        a="0011"; b="0111";
        sc_start();
	std::cout<< "Output= " << s.read() << " Sign = " << sign.read() << " Enable= " << enable.read() << endl;
 }
