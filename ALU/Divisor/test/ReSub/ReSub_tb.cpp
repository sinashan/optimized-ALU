
#include <systemc.h>
#include "ReSub.h"


int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );
	sc_signal< sc_lv<16> > a, b, s;
	sc_signal< sc_logic > sign;
	sc_signal< sc_bv<1> > enable;

	ReSub ReSub1("ReSub1");
	ReSub1.a(a);
	ReSub1.b(b);
	ReSub1.s(s);
	ReSub1.sign(sign);
	ReSub1.enable(enable);





        a="1000000000000000"; b="0000000000001000";
        sc_start();
	std::cout<< "Sign= " << sign.read() << " Out= " << s.read() << " Enable= " << enable.read() << endl;
 }
