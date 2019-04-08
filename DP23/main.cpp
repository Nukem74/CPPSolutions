#include <iostream>
using namespace std;

/*Даны два натуральных числа. Найти их наименьшее общее кратное.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Enter two numbers to find their lesser common aliqout";
	int first, second;//initialising operators
	cout << "\n";
	cout << "Enter first number ";
	cin >> first;
	cout << "\n";
	cout << "Enter second number ";
	cin >> second;
	cout << "\n";
	int temp = 0;//initialising temporary variable
	for(int i = 1;i != first;i++)
	{
		if(first % i == 0 && second % i == 0)
		temp = i;
	}
	cout << "Lesser Common Aliqout is ";
	cout << (first*second)/temp;
	
	
	return 0;
}
