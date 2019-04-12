#include <iostream>
using namespace std;

/*Дана последовательность символов длины n (n >= 1). Проверить баланс круглых скобок в этом выражении.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char letter;
	int counter;
	while(letter != '0')
	{
		cin >> letter;
		if(letter == '(')
		{
			counter++;
		}
		if(letter == ')')
		{
			counter--;
		}	
	}
	if(counter != 0)
	{
		cout << "\nUnbalanced parenthesis";
	}
	return 0;
}
