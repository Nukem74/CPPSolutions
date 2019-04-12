#include <iostream>
using namespace std;

/*ƒана последовательность натуральных чисел, ограниченна€ вводом нул€. ѕроверить, €вл€етс€ ли эта последовательность строго монотонной.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Enter a sequence of numbers ";
	int number, alfa, beta, delta;
	cout << "\nEnter first number ";
	cin >> number;
	alfa = number;
	cout << "\nEnter new number ";
	cin >> number;
	beta = number;
	delta = beta - alfa;
	while(number != 0)
	{
		alfa = beta;
		cout << "\nEnter new number ";
		cin >> number;
		beta = number;
		if((delta * (beta - alfa) > 0))
		{
			cout << "sequence is dull";
		}
		else
		{
			cout << "sequence is NOT dull";
		}
		delta = beta - alfa;
	}

	return 0;
}
