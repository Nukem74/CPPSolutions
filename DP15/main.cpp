#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number;
	cout << "Enter a number";
	cin >> number;
	for(int i = 2; i != number; i++)
	{
		if(number % i == 0)
		{
			number = i;
			break;
		}
	}
	cout << number;
	
	
	return 0;
}
