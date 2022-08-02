#include <iostream>
using namespace std;

class Calculator
{
    public:
    double a;
    double b;
    string operation;
    Calculator(double x, double y, string s)
    {
        a = x;
        b = y;
        operation = s;
    }
    double calculate()
    {
        if(operation=="Addition") 
            return a+b;
        else if(operation=="Subtraction") 
            return a-b;
        else if(operation=="Division") 
            return a/b;
        else if(operation=="Multiplication")
            return a*b;
    }
};

int main() {
	Calculator calc(6.0, 2.0, "Subtraction");
	cout<<calc.calculate();
	return 0;
}
