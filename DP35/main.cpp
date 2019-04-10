#include <iostream>
using namespace std;

/*Даны натуральные числа x и n (n <= 10). Вывести на экран число x, записанное в системе счисления с основанием n.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Enter a number, and a base";
	int number, base;//initialising operators
	cout << "\nEnter a number ";
	cin >> number;
	cout << "\nEnter a base ";
	cin >> base;
	int  result, temp;//initialising parametrs
	result = 0;
	while(number != 0)//reducing number to base
	{
		result *= 10;
		result += number % base;
		number = number / base;
	}
	temp = result;
	result = 0;
	while(temp != 0)//reverting result
	{	
		result *= 10;
		result += temp % 10;
		temp = temp / 10;
	}
	cout << result;
	return 0;
}
