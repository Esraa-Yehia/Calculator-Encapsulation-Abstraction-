#include <iostream>
using namespace std;

class Calculator
{
private :
	double Num;
	double PreviousResult = 0;
	double NewResult = 0;
	string OperationType;


public :

	void Add(double num)
	{
		OperationType = "Adding";
		Num = num;
		PreviousResult = NewResult;
		NewResult += Num;

	}


	void Subtract(double num)
	{
		OperationType = "Substacting";
		Num = num;
		PreviousResult = NewResult;
		NewResult -= Num;

	}


	void Multiply(double num)
	{
		OperationType = "Multiplying";
		Num = num;
		PreviousResult = NewResult;
		NewResult *= Num;

	}


	void Divide(double num)
	{
		OperationType = "Dividing";

		if (num == 0)
		{
			Num = 1;
		}
		else
		{
			Num = num;
		}
	
		PreviousResult = NewResult;
		NewResult /= Num;

	}

	void Clear()
	{
		Num = 0;
		NewResult = 0;

	}


	void PrintResult()
	{

		cout << "Result After " << OperationType << " " << Num << " is : " << NewResult << endl;
	}






};

int main()
{
	Calculator Calculator1;

	Calculator1.Add(10);
	Calculator1.PrintResult();

	Calculator1.Add(100);
	Calculator1.PrintResult();

	Calculator1.Subtract(20);
	Calculator1.PrintResult();

	Calculator1.Divide(0);
	Calculator1.PrintResult();

	Calculator1.Divide(2);
	Calculator1.PrintResult();

	Calculator1.Multiply(3);
	Calculator1.PrintResult();
















}

