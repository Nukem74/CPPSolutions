#include <iostream>
using namespace std;

/*Дана последовательность натуральных чисел, ограниченная вводом нуля. 
Проверить, начинается ли каждый из ее членов (со второго) с десятичной цифры, на которую оканчивается предыдущий.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Enter a sequnece of numbers ";
	int number = 1;
	int first, last;
	last = first;
	while(number != 0)
	{
		cout << "\nEnter new number ";
		cin >> number;
		first = number % 10;
		if(first == last)
		{
			cout << "\nIt start where that ends";
		}
		else
		{
			cout << "\nIt starts from nowhere";
		}
		while(number != 0)
		{
			last = number % 10;
			number = number / 10;
		}
		number = 1;
		
	}
	return 0;
}
