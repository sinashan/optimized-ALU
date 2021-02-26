
#include <systemc.h>
#include "divider.h"


int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_lv<16> > a, b, quotient;



	divider divider1("divider1");
	divider1.a(a);
	divider1.b(b);
	divider1.quotient(quotient);







        a="0000000000000100"; b="0000000000000010";
        sc_start();
	std::cout<< "Output= " << quotient.read() << endl;
 }
