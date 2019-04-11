#include <iostream>
using namespace std;

/*ƒано натуральное число n. ѕроверить, представл€ет ли оно собой натуральную степень числа 2.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Enter a number ";
	int number;//initialising variable
	cin >> number;
	while(number != 1)
	{
		if(number % 2 != 0)//checking dividency
		{
			cout << "\nIs not 2-based";
			number = 0;
			break;
		}
		number = number / 2;
	}
	if(number != 0)//displaying positive answer
		cout << "Is 2-based";
	
	return 0;
}
