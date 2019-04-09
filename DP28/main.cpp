#include <iostream>
#include <cmath>
using namespace std;
/*Дано натуральное число n (которое также может быть равно нулю). Вычислить n!*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	cout << "To get factorial n enter value of n = ";
	int n;//initialising base of factorial
	unsigned long int result;
	cin >> n;
	result = 1;//initialising output parametr
	for(int i = 1; i != n + 1; i++)
	{
		result = result * i;//Reaching factorial
	}
	
	cout << "Factorian n! is ";
	cout << result;
	
	return 0;
}
