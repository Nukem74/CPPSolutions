#include <iostream>
#include <cmath>
using namespace std;

/*Дано натуральное число n. Вывести на экран решения всех квадратных уравнений вида x^2 + 2ax - 3 = 0 для всех a от 1 до n.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "To solve (x^2 + 2 * a * x - 3) input range of @a";
	int par;//initialising parametr
	cout << "\n";
	cout << "Enter @a value ";
	cin >> par;
	for(int i = 1; i != par;i++)//solving equation
	{
		cout << "For @a=";
		cout << i;
		cout << " solutions are x1 = ";
		cout << (-i+sqrt(i*i+3));
		cout << " and x2 = ";
		cout << (-i-sqrt(i*i+3));
		cout << "\n";
	}
	return 0;
}
