#ifndef FIVEADDER_H
#define FIVEADDER_H
#include "systemc.h"


SC_MODULE(fiveAdder)         
{
  sc_in< sc_logic > a0, a1, a2, a3, a4, b0, b1, b2, b3, b4;
  sc_out< sc_logic > sum0, sum1, sum2, sum3, sum4;
  sc_out< sc_logic > cout;

//------------Local Variables Here---------------------
  fadder fad1, fad2, fad3, fad4, fad5;
  sc_signal< sc_lv<4> > A_s,B_s,SUM_s;
  sc_signal< sc_logic > A3,A2,A1,A0,B3,B2,B1,B0;
  sc_signal< sc_logic > CIN_s,cout1,cout2,cout3, cout4, COUT_s;
  
  void do_fouradd()
  {
	CIN_s = SC_LOGIC_0;
  }

  SC_CTOR(fiveAdder) : fad1("F1"), fad2("F2"), fad3("F3"), fad4("F4"), fad5("F5")        // constructor
  {

	fad1 << a0 << b0 << CIN_s << sum0 << cout1;
	fad2 << a1 << b1 << cout1 << sum1 << cout2;
	fad3 << a2 << b2 << cout2 << sum2 << cout3;
	fad4 << a3 << b3 << cout3 << sum3 << cout4;
	fad5 << a4 << b4 << cout4 << sum4 << cout;

	SC_METHOD(do_fouradd);
	sensitive << a0 << a1 << a2 << a3 << a4 << b0 << b1 << b2 << b3 << b4; 
        
  }
};
#endif
