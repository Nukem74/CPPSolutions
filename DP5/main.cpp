#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int decimal, result;
	decimal = 11;
	cout << decimal;
	result = 0;
	result += decimal % 2;
	decimal = decimal / 2;
	result += decimal % 2;
	decimal = decimal / 2;
	result += decimal % 2;
	decimal = decimal / 2;
	result += decimal % 2;
	decimal = decimal / 2;
	cout << result;

	
	return 0;
}
