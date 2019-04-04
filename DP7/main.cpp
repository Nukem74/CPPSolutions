#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double first, second, third;
	first = 10001.1;
	second = 10003.9;
	third = 44444;
	if(first > second)
	{
		if(first > third)
		cout << first;
		else
		cout << third;
	}
	else
	{
		if(second > third)
		cout << second;
		else
		cout << third;
	}
	return 0;
}
