// A Simple TestBench for SystemC
// By: Pourya Gohari

#include <systemc.h>
#include "buffer.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );


	sc_signal< sc_logic > in, enable, out;

	buffer buffer1("buffer1");
	buffer1.in(in);
	buffer1.enable(enable);
	buffer1.out(out);
	

	in = SC_LOGIC_0;
	enable = SC_LOGIC_0;
        sc_start(1,SC_NS);

	std::cout << out.read() << endl;
	
	in = SC_LOGIC_1;
	enable = SC_LOGIC_1;
        sc_start(1,SC_NS);

	std::cout << out.read() << endl;	
		
	
  

 }
