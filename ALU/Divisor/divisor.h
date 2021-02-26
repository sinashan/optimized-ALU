#include "systemc.h"
#include "../Multiplier/fourByfour.h"
#include "../Multiplier/eightByfour.h"
#include "../Multiplier/FourDigitAdder.h"
#include "../Multiplier/eightByeight.h"
#include "../Multiplier/ImPart/ImSum.h"
#include "../Multiplier/RePart/RePart.h"

SC_MODULE(divisor)
{
	sc_in< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, b0, b1, b2, b3, c0, c1, c2, c3, c4, c5, c6, c7, d0, d1, d2, d3;
	sc_out< sc_logic > re0, re1, re2, re3, re4, re5, re6, re7, im0, im1, im2, im3;
//------------Local Variables
	eightByeight ebe1, ebe2, ebe3;
	fourByfour fbf1;
	eightByfour  ebf1, ebf2;
	FourDigitAdder fda, fda2;
	RePart subNom; //subDenom=denominator, subNom=nominator imaginary part
	
	sc_signal< sc_logic > zero;
	sc_signal< sc_logic > ebe10, ebe11, ebe12, ebe13, ebe14, ebe15, ebe16, ebe17, ebe18, ebe19, ebe110, ebe111, ebe112, ebe113, ebe114, ebe115; 
	sc_signal< sc_logic > ebe20, ebe21, ebe22, ebe23, ebe24, ebe25, ebe26, ebe27, ebe28, ebe29, ebe210, ebe211, ebe212, ebe213, ebe214, ebe215; 
	sc_signal< sc_logic > fda0, fda1, fda2, fda3, fda4, fda5, fda6, fda7, fda8, fda9, fda10, fda11, fda12, fda13, fda14, fda15, fda16; 
	sc_signal< sc_logic > fbf10, fbf11, fbf12, fbf13, fbf14, fbf15, fbf16, fbf17;
	sc_signal< sc_logic > fbf20, fbf21, fbf22, fbf23, fbf24, fbf25, fbf26, fbf27;
	sc_signal< sc_logic > ebf10, ebf11, ebf12, ebf13, ebf14, ebf15, ebf16, ebf17, ebf18, ebf19, ebf110, ebf111;
	sc_signal< sc_logic > ebf20, ebf21, ebf22, ebf23, ebf24, ebf25, ebf26, ebf27, ebf28, ebf29, ebf210, ebf211;
	sc_signal< sc_logic > subDenom0, subDenom1, subDenom2, subDenom3, subDenom4, subDenom5, subDenom6, subDenom7, subDenom8, subDenom9, subDenom10, subDenom11, subDenom12, subDenom13, subDenom14, subDenom15;  
	sc_signal< sc_logic > subNom0, subNom1, subNom2, subNom3, subNom4, subNom5, subNom6, subNom7, subNom8, subNom9, subNom10, subNom11, subNom12, subNom13, subNom14, subNom15; 

	void do_divisor()
	{
		zero = SC_LOGIC_0;
	}

	SC_CTOR(divisor) : ebe1("EBE1"), fbf1("FBF1"), ebe2("EBE2"), fbf2("FBF2"), fda("FDA"), ebf1("EBF1"), ebf2("EBF2"), subNom("SUBNOM"), fda2("FDA2")
	{
		ebe1 << c0 << c1 << c2 << c3 << c4 << c5 << c6 << c7 << c0 << c1 << c2 << c3 << c4 << c5 << c6 << c7 << ebe10 << ebe11 << ebe12 << ebe13 << ebe14 << ebe15 << ebe16 << ebe17 << ebe18 << ebe19 << ebe110 << ebe111 << ebe112 << ebe113 << ebe114 << ebe115;
		fbf1 << d0 << d1 << d2 << d3 << d0 << d1 << d2 << d3 << fbf10 << fbf11 << fbf12 < fbf13 << fbf14 << fbf15 << fbf16 << fbf17; 
		fda2 << ebe10 << ebe11 << ebe12 << ebe13 << ebe14 << ebe15 << ebe16 << ebe17 << ebe18 << ebe19 << ebe110 << ebe111 << ebe112 << ebe113 << ebe114 << ebe115 << fbf10 << fbf11 << fbf12 < fbf13 << fbf14 << fbf15 << fbf16 << fbf17 << zero << zero << zero << zero << zero << zero << zero << zero << subDenom0 << subDenom1 << subDenom2 << subDenom3 << subDenom4 << subDenom5 << subDenom6 << subDenom7 << subDenom8 << subDenom9 << subDenom10 << subDenom11 << subDenom12 << subDenom13 << subDenom14 << subDenom15;

		
		ebe2 << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << c0 << c1 << c2 << c3 << c4 << c5 << c6 << c7 << ebe20 << ebe21 << ebe22 << ebe23 << ebe24 << ebe25 << ebe26 << ebe27 << ebe28 << ebe29 << ebe210 << ebe211 << ebe212 << ebe213 << ebe214 << ebe215; 
		fbf2 << b0 << b1 << b2 << b3 << d0 << d1 << d2 << d3 << fbf20 << fbf21 << fbf22 << fbf23 << fbf24 << fbf25 << fbf26 << fbf27;
		fda << ebe20 << ebe21 << ebe22 << ebe23 << ebe24 << ebe25 << ebe26 << ebe27 << ebe28 << ebe29 << ebe210 << ebe211 << ebe212 << ebe213 << ebe214 << ebe215 << fbf20 << fbf21 << fbf22 << fbf23 << fbf24 << fbf25 << fbf26 << fbf27 << zero << zero << zero << zero << zero << zero << zero << zero << fda0 << fda1 << fda2 << fda3 << fda4 << fda5 << fda6 << fda7 << fda8 << fda9 << fda10 << fda11 << fda12 << fda13 << fda14 << fda15 << fda16;

		ebf3 << c0 << c1 << c2 << c3 << c4 << c5 << c6 << c7 << b0 << b1 << b2 << b3 << ebf10 << ebf11 << ebf12 << ebf13 << ebf14 << ebf15 << ebf16 << ebf17 << ebf18 << ebf19 << ebf110 << ebf111;
		ebf2 << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << d0 << d1 << d2 << d3 << ebf20 << ebf21 << ebf22 << ebf23 << ebf24 << ebf25 << ebf26 << ebf27 << ebf28 << ebf29 << ebf210 << ebf211;
//subNom has four zeros to match with RePart (which works four digit) but they're not really needed (so it's actually 3 digits needed
		subNom << ebf10 << ebf11 << ebf12 << ebf13 << ebf14 << ebf15 << ebf16 << ebf17 << ebf18 << ebf19 << ebf110 << ebf111 << zero << zero << zero << zero << ebf20 << ebf21 << ebf22 << ebf23 << ebf24 << ebf25 << ebf26 << ebf27 << ebf28 << ebf29 << ebf210 << ebf211 << zero << zero << zero << zero << subNom0 << subNom1 << subNom2 << subNom3 << subNom4 << subNom5 << subNom6 << subNom7 << subNom8 << subNom9 << subNom10 << subNom11 << subNom12 << subNom13 << subNom14 << subNom15; 
		
	
		SC_METHOD(do_divisor);
		sensitive << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << b0 << b1 << b2 << b3 << c0 << c1 << c2 << c3 << c4 << c5 << c6 << c7 << d0 << d1 << d2 << d3;
	}
};
