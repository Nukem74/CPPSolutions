#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*ƒано натуральное число меньше 16. ѕосчитать количество его единичных битов.*/

int main(int argc, char** argv) {
	int decimal;
	cout << "Enter a number lesser than 16:_";
	cin >> decimal;
	cout << decimal;
	cout << "\n";
	int result = 0;
	for(int i = 0; i < 4;i++)
	{
		result += decimal % 2;
		decimal = decimal / 2;
	}
	cout << "There are ";
	cout << result;
	cout << " ones in binary representation of your number";

	
	return 0;
}
