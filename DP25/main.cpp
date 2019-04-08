#include <iostream>
using namespace std;

/*Даны натуральные числа x и n. Вычислить xn, используя алгоритм быстрого возведения в степень*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Enter base and index to get power";
	int base, index, power;
	cout << "\n";
	cout << "Enter a base ";
	cin >> base;
	cout << "\n";
	cout << "Enter an index ";
	cin >> index;
	power = 1;
	while(index != 1)
	{
		if((index % 2) != 0)
		{
			power = power * base;
		}
		base = base * base;
		index = index / 2;
	}
	power = base * power;
	cout << "The power is ";
	cout << power;

	return 0;
}
