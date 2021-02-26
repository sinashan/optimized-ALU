
#include <systemc.h>
#include "four2five.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3;
	sc_signal< sc_logic > s0, s1, s2, s3, s4;

	four2five four2five1("four2five1");
	four2five1.a0(a0);
	four2five1.a1(a1);
	four2five1.a2(a2);
	four2five1.a3(a3);
	four2five1.s0(s0);
	four2five1.s1(s1);
	four2five1.s2(s2);
	four2five1.s3(s3);
	four2five1.s4(s4);




        a0 = SC_LOGIC_0;
        a1 = SC_LOGIC_1;
	a2 = SC_LOGIC_0;
	a3 = SC_LOGIC_0;
    
   

        sc_start(1,SC_NS);
	std::cout<< "Out= " << s4.read() << s3.read() << s2.read() << s1.read() << s0.read() << endl;

 }
