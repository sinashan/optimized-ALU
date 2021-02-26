
#include <systemc.h>
#include "dff.h"


int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > input;
	sc_signal< sc_logic > din, dout;
	

	dff dff1("dff1");
	dff1.input(input);
	dff1.din(din);
	dff1.dout(dout);



	
	input=SC_LOGIC_1; din=SC_LOGIC_1;
    
        sc_start();
	std::cout<< "Output= " << dout.read() << endl;
 }
