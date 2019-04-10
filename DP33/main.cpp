#include <iostream>
using namespace std;
/*Дано натуральное число n (n > 1). Получить его каноническое разложение на простые сомножители, то есть представить в виде произведения простых сомножителей. 
  При этом в разложении допустимо указывать множитель 1*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	cout << "Enter a number ";
	int number;//initialising operator
	cin >> number;
	for(int i = 2; number != 1;)
	{
		if(number % i == 0)
		{
			cout << "\n";
			cout << i;
			number = number / i;
		}
		else
		{
			i++;
		}
	}

	return 0;
}
