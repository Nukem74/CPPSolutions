#include <iostream>
using namespace std;

/*Дано натуральное n (которое также может быть равно 0). Вывести на экран все числа Фибоначчи до n-ного включительно.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Enter a number ";
	int number, result, temp;
	cin >> number;
	result = 1;
	temp = 0;
	switch (number)
	{
		case 0:
			{
				result = 0;
				break;
			}
		case 1:
			{
				result = 1;
				break;
			}
		default:
			{
				for(int i = 2; i < number; i++)
				{	
					temp = result - temp;
					result = result + temp;
					cout << "\n";
					cout << result;
				}
				break;
			}
	}
	return 0;
}
