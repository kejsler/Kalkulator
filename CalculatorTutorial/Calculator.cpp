#include "Calculator.h"

 double Calculator::calculate(double x, char oper, double y)
{
	 switch (oper)
	 {
	 case '+':
		 return x + y;
	 case '-':
		 return x - y;
	 case '*':
		 return x * y;
	 case '/':
		 return x / y;
	 Default:
		 return 0.0;
	 }
	
}