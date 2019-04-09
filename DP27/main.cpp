#include <iostream>
#include <cmath>
using namespace std;
/*Дано натуральное число n, вещественное число x и набор вещественных чисел an, an-1, ..., a0. 
Вычислить значение многочлена n-ной степени с коэффициентами an, an-1, ..., a0 от одной переменной в точке x.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "To solve multiargumental equation like (an*x^n + a(n-1)*x^(n-1) + ... + a0) \n input index of multiargumental: \n n=";
	double result, par, arg;//initialising parametrs
	int index;//initialising index
	cin >> index;
	result = 0;
	cout << "\n";
	cout << "Enter an argument x = ";
	cin >> arg;//initialising argument
	for(int i = 0;i != index; i++)
	{
		cout << "Enter ";
		cout << i;
		cout << " member of multiargumental ";
		cin >> par;//initialising parametr
		result = result + (par * arg);
	}
	
	cout << "result is ";
	cout << result;
	
	return 0;
}
