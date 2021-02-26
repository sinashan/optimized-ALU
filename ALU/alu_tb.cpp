#include <systemc.h>
#include "alu.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_lv<12> > a, b;
	sc_signal< sc_logic > start, done;
	sc_signal< sc_lv<4> > operation;
	sc_signal< sc_lv<32> > s;

	alu alu1("ALU1");
	alu1.a(a);
	alu1.b(b);
	alu1.start(start);
	alu1.done(done);
	alu1.operation(operation);
	alu1.s(s);


	operation = "0100";
	a="000000110010";
	b="000001111000";
   	start = SC_LOGIC_1;

        sc_start(1,SC_NS);
	sc_lv<4> op_re = operation.read();
	sc_logic st = start.read();

if(start == SC_LOGIC_0) { std::cout << "Start Bit Hasn't Been Set!" << endl; }
else
{
	if(op_re == "0001")
	{
		std::cout << "Third Real Digit = " << s.read()[14] << "\nSecond Real Digit= " << s.read()[13] << s.read()[12] << s.read()[11] << s.read()[10] <<"\nFirst Real Digit= " << s.read()[8] << s.read()[7] << s.read()[6] << s.read()[5] << "\nSecond Imaginary Digit= " << s.read()[4] << "\nFirst Imaginary Digit = " << s.read()[3] << s.read()[2] << s.read()[1] << s.read()[0] << endl;
		std::cout << "\nDone= " << done.read() << endl;
	}
	else if(op_re == "0010")
	{
		std::cout << "Real Digit Sign = " << s.read()[14] << "\nSecond Real Digit= " << s.read()[13] << s.read()[12] << s.read()[11] << s.read()[10] <<"\nFirst Real Digit= " << s.read()[8] << s.read()[7] << s.read()[6] << s.read()[5] << "\nImaginary Digit Sign= " << s.read()[4] << "\nFirst Imaginary Digit = " << s.read()[3] << s.read()[2] << s.read()[1] << s.read()[0] << endl;
		std::cout << "\nDone= " << done.read() << endl;
	}
	else if(op_re == "0100")
	{
		std::cout << "***Real Part***" << "\nSign= " << s.read()[30] << "\nFourth Digit= " << s.read()[15] << s.read()[14] << s.read()[13] << s.read()[12] << "\nThird Digit= " << s.read()[11] << s.read()[10] << s.read()[9] << s.read()[8] << "\nSecond Digit= " << s.read()[7] << s.read()[6] << s.read()[5] << s.read()[4] << "\nFirst Digit= " << s.read()[3] << s.read()[2] << s.read()[1] << s.read()[0] << "\n\n***Imaginary Part***" << "\nFourth Digit= " << s.read()[29] << "\nThird Digit= " << s.read()[28] << s.read()[27] << s.read()[26] <<  s.read()[25] << "\nSecond Digit= " << s.read()[24] << s.read()[23] << s.read()[22] <<  s.read()[21] << "\nFirst Digit= " << s.read()[20] << s.read()[19] << s.read()[18] << s.read()[17] << endl; 	
		std::cout << "\nDone= " << done.read() << endl;
	}
	else if(op_re == "1000")
	{
		//code for division
	}
		
}


 }
