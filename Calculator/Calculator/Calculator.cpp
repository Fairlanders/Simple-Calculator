#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <string>
#include "Calculator.h"

using namespace std;

float Numbers = 0, arr[500], SumAdd = 0, SumExtract = 0, SumMultiply = 1, SumDiv = 0, NumberThatIsDivided = 0, NumberThatDivides = 0, a, x, y, z;
string str;

int main()
{
	cout << "Welcome to the calculator program.(Made by Fairlanders)" << endl;
	cout << "Please enter what you'd like to do." << endl;
	cout << " Functions " << endl;
	cout << " --------- " << endl;
	cout << " Addition " << endl;
	cout << " Subtraction " << endl;
	cout << " Multiplication " << endl;
	cout << " Division " << endl;
	cout << " --------- " << endl;
	
	getline(cin, str);
	system("CLS");
	if ((str == "Addition"))
	{
		cout << "Please enter how many numbers you want to enter." << endl;
		cin >> Numbers;
		cout << "Please enter the values you want to add together." << endl;
		for (int i = 0; i < Numbers; i++)
		{
			cin >> arr[i];
			SumAdd = SumAdd + arr[i];
		}
		cout << "The sum of the numbers you've just entered is equal to " << SumAdd << endl;
		system("PAUSE");
	}
	if ((str == "Multiplication"))
		{
			cout << "Please enter how many numbers you want to enter." << endl;
			cin >> Numbers;
			cout << "Please enter the values you want to multiply." << endl;
			for (int k = 0; k < Numbers; k++)
			{
				cin >> arr[500];
				SumMultiply = SumMultiply * arr[500];
			}
			cout << "The multiplication of the numbers you've just entered is equal to " << SumMultiply << "." << endl;
			system("PAUSE");
		}
	if ((str == "Division"))
	{
		cout << "Please enter the number which you want to divide." << endl;
		cin >> NumberThatIsDivided;
		cout << "Please enter the number which you want to divide " << NumberThatIsDivided << " to what." << endl;
		cin >> NumberThatDivides;
		a = NumberThatIsDivided / NumberThatDivides;
		cout << "The answer is : " << a << endl;
	}
	if ((str == "Subtraction"))
	{
		cout << "Please enter the number which you want to subtract from." << endl;
		cin >> x;
		cout << "Please enter the number which you want to subtract subtract from: " << x << endl;
		cin >> y;
		z = x-y;
		cout << "The answer is : " << z << endl;
	}
	return 0;
	}
