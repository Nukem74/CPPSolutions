#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number;
	cout << "Enter a number";
	cin >> number;
	for(int i = 1; i != number; i++)
	{
		cout << i;
	}

	return 0;
}
