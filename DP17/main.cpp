#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number, counter;
	counter=0;
	cout << "Give me a number";
	cin >> number;
	for(int i = 2; i != number; i++)
	{
		if(number % i == 0)
		{
			counter++;
		}
	}
	if(counter == 0)
	{
		cout << "Is simple number";
	}
	else
	{
		cout << "Is not simple number";
	}
	return 0;
}
