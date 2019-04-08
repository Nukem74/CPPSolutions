#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Даны два натуральных числа. Найти их наибольший общий делитель.*/

int main(int argc, char** argv) {
	cout << "Enter two numbers to find their largest common divider";
	int first, second;//Initialising operators
	cout << "\n";
	cout << "Enter first number ";
	cin >> first;
	cout << "\n";
	cout << "Enter second number ";
	cin >> second;
	int temp;
	for(int i = 1;i != first;i++)
	{
		if(first % i == 0 && second % i == 0)
		temp = i;
	}
	cout << "\n";
	cout << "The largest common divider is ";
	cout << temp;
	return 0;
}
