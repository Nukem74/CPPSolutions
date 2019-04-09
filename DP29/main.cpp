#include <iostream>
#include <cmath>
using namespace std;
/*Даны натуральные числа n и k (k не превышает n). Вычислить число сочетаний из n по k.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Enter two numbers, first number must be larger then second";
	int first, second;//Initialising operators
	cout << "\n";
	cout << "Enter first number ";
	cin >> first;
	cout << "\n";
	cout << "Enter second number ";
	cin >> second;
	int result, numenator, denominator;//Initialising parametrs
	numenator = first;
	denominator = 1;
	for(int i = 1;i != second + 1; i++)
	{
		numenator *= (first - i);//Solving
		denominator *= i;
	}
	result = numenator / denominator;//Calculating result
	cout << "\n";
	cout << "The result is ";
	cout << result;
	
	return 0;
}
