#include <iostream>
using namespace std;

/*Дано натуральное n (которое также может быть равно 0). Вывести на экран сумму чисел Фибоначчи до n-ного включительно.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Enter a number ";
	int number, result, temp, sum;
	cin >> number;
	result = 1;
	temp = 0;
	sum = 0;
	switch (number)
	{
		case 0:
			{
				result = 0;
				sum = 0;
				break;
			}
		case 1:
			{
				result = 1;
				sum = 1;
				break;
			}
		default:
			{
				sum = 1;
				for(int i = 2; i < number; i++)
				{	
					temp = result - temp;
					result = result + temp;
					sum = sum + result;
				}
				break;
			}
	}
			
	
	cout << "\nResult is ";
	cout << result;
	cout << "\nSummary ";
	cout << sum;

	
	return 0;
}
