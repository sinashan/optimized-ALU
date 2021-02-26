#include "systemc.h"
#include "nand2.h"

SC_MODULE(latch)
{
	sc_in< sc_logic > set_not, reset_not;
	sc_out< sc_logic > q, qnot;
//----------Local Variables------------
	nand2_gate nand21, nand22;

	sc_signal< sc_logic > nand21out, nand22out;

	void initiate()
	{
		nand21out = q.read();
		nand22out = qnot.read();
	}


	SC_CTOR(latch) : nand21("NAND21"), nand22("NAND22")
	{
		nand21 << reset_not << qnot << q;
		nand22 << set_not << q << qnot;
	
		SC_METHOD(initiate);
		sensitive << set_not << reset_not;

	}
};
