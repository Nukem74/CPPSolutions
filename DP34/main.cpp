#include <iostream>
using namespace std;

/*Даны два натуральных числа одинаковой десятичной разрядности. Сформировать из них третье число так, 
чтобы цифры первого числа стояли на нечетных местах третьего, а цифры второго - на четных. При этом порядки следования цифр сохраняются. 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Enter 2 numbers with same length";
	int first, second, result;//initialising operators
	cout << "\nEnter first number ";
	cin >> first;
	cout << "\nEnter second number ";
	cin >> second;
	result = 0;//initialising storage variable
	while(first != 0)
	{
		result *= 10;
		result += first % 10;
		first = first / 10;
		result *= 10;
		result += second % 10;
		second = second / 10;
	}
	cout << "\n Result is ";
	cout << result;
	
	return 0;
}
