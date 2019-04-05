#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number, counter, range;
	cout << "How much simples do you need?";
	cin >> number;
	range = 1;
	for(int i = 0; i < number;)
	{
		counter = 0;
		for(int j = 1;j <= range; j++)
		{
			if(range % j == 0)
			{
				counter++;
			}
		}
		if(counter < 3)
		{
			cout << range;
			cout << "\n";
			i++;
		}
		range++;
	}
	return 0;
}
