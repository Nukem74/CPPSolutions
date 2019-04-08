#include <iostream>
using namespace std;

/*Даны натуральные числа x и n (которое также может быть равно 0). Вычислить x^n.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	cout << "Enter base and index to get power";
	int base, index, power;
	power = 1;
	cout << "\n";
	cout << "Enter a base ";
	cin >> base;
	cout << "\n";
	cout << "Enter an index ";
	cin >> index;
		for(int i = 0; i < index; i++)
	{
		power = power * base;
	}
	cout << "\n";
	cout << "THE K'OS IS PAWAH ";
	cout << power;
	return 0;
}
