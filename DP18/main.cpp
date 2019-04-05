#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number, counter;

	cout << "Give me a number";
	cin >> number;

	for(int j = 1; j != number; j++)
	{	
		counter=0;
		for(int i = 1; i != j; i++)
		{
			if(number % i == 0)
			{				
				counter++;
			}
			if(counter > 1)	break;
		}
		if(counter == 2)
		{
		cout << j;
		}
	}
	

	return 0;
}
