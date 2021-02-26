// A Simple TestBench for SystemC
// By: Pourya Gohari

#include <systemc.h>
#include "latch.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > set_not, reset_not, q, qnot;

	latch latch1("LATCH");
	latch1.set_not(set_not);
	latch1.reset_not(reset_not);
	latch1.q(q);
	latch1.qnot(qnot);

// set_not==q
	set_not = SC_LOGIC_1;
	reset_not = SC_LOGIC_0;
	q = SC_LOGIC_1;
	qnot = SC_LOGIC_0;
        sc_start(1,SC_NS);

	std::cout << q.read() << " " << qnot.read() <<  endl;
	
	
 }
