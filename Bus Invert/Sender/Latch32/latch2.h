#include "systemc.h"
#include "Latch/latch.h"
#include "not.h"

SC_MODULE(reg2)
{
	sc_in< sc_lv<2> > input;
	sc_out< sc_bv<2> > output;

//-----------Local Variables--------------
	latch latch1, latch2;
	not_gate not1, not2;
	
	sc_signal< sc_logic > i0, i1; 
	sc_signal< sc_logic > n0, n1;
	sc_signal< sc_logic > latch_out0, latch_out1;
	sc_signal< sc_logic > latch_not0, latch_not1;  



	void initiate()
	{
		i0 = input.read()[0];
		i1 = input.read()[1];
	}

	void out_write()
	{
		sc_lv<2> temp;
		temp[0] = latch_out0.read();
		temp[1] = latch_out1.read();
	

		output.write(temp);
		//inv_out.write(inv.read());

	}

	SC_CTOR(reg2) : latch1("LATCH1"), latch2("LATCH2"), not1("NOT1"), not2("NOT2")
	{
		not1 << i0 << n0;
		not2 << i1 << n1;
		

		latch1 << i0 << n0 << latch_out0 << latch_not0;
		latch2 << i1 << n1 << latch_out1 << latch_not1;
		

		SC_METHOD(initiate);
		sensitive << input;

		SC_METHOD(out_write);
		sensitive << latch_out0 << latch_out1;
	}
};
