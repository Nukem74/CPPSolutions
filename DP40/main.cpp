#include <iostream>
using namespace std;

/*Дана последовательность натуральных чисел, ограниченная вводом нуля. Вывести на экран произведение четных элементов этой последовательности. 
При этом ноль не считается членом последовательности.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Enter a number ";
	int number, result;//initialising variable
	cin >> number;
	result = 1;
	for(int i = 1; number != 0; i++)
	{
		if(number % 10 == 0)
		{
			break;
		}
		if(i % 2 == 0)
		{
			result = result * (number % 10);
			cout << result;
		}
		number = number / 10;
	}
	cout << "\nResult is ";
	cout << result;
	
	return 0;
}
