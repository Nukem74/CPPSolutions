#include <iostream>
using namespace std;

/*ƒана последовательность из трех и более натуральных чисел, ограниченна€ вводом нул€. ѕроверить, €вл€етс€ ли эта последовательность пилообразной.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Enter a sequence of numbers ";
	int number, first, second, third, temp;
	cout << "\nEnter first number ";
	cin >> number;
	first = number;
	cout << "\nEnter new number ";
	cin >> number;
	second = number;
	while(number != 0)
	{
		cout << "\nEnter a new number ";
		cin >> number;
		third = number;
		if(((second - first)*(second - third)) > 0)
		{
			cout << "\nTexas chaisaw slaughter";
		}
		else
		{
			cout << "\nBeethoven";
		}
		first = second;
		second = third;
	}
	return 0;
}
