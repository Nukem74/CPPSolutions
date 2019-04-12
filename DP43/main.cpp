#include <iostream>
using namespace std;

/*Дана последовательность натуральных чисел, ограниченная вводом нуля. 
Проверить, начинается ли каждый из ее членов (со второго) с десятичной цифры, на которую оканчивается предыдущий.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Enter a sequnece of numbers ";
	int first, last, temp, number;
	cout << "\nEnter new number ";
	cin >> number;
	while(number != 0)
	{
		last = number % 10;
		cout << "\nEnter new number ";
		cin >> number;
		temp = number;
		cout << "\n";
		while(number != 0)
		{
			first = number % 10;
			number = number / 10;
		}
		if(first == last)
		{
			cout << first;
			cout << "\n";
			cout << last;
		}
		else
		{
			cout << first;
			cout << "\n";
			cout << last;
		}
		number = temp;	
	}
	return 0;
}
