
#include <systemc.h>
#include "mux32.h"


int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_lv<32> > in0, in1, out;
	sc_signal< sc_logic > select;

	mux32 mux1("mux1");
	mux1.in0(in0);
	mux1.in1(in1);
	mux1.select(select);
	mux1.out(out);


	

      
	in0 = "11111111111111111111111111111111";
	in1 = "00000000000000000000000000000000";
	select = SC_LOGIC_0;
        sc_start();

	std::cout<< "Out= " << out.read() << endl;
 }
