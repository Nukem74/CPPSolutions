#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*ƒаны два числа. ¬ывести на экран то из них, которое больше.*/
int main(int argc, char** argv) {
	double first, second;
	cout << "Enter first number:";
	cin >> first;//инициализаци€ первого числа
	cout <<"Enter second number";
	cin >> second;//инициализаци€ второго число
	if (first > second)
	{
		cout << first;
	}
	else
	{
		cout << second;
	}
	
	return 0;
}
