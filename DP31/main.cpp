#include <iostream>
using namespace std;

/*Формулировка. Дано натуральное число n заранее неизвестной разрядности. 
  Сформировать и вывести на экран число, представляющее собой реверсную запись n.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int reverted(int n)
{
	int number = n;
	int rebmun = 0;
	while(number != 0)
	{
		rebmun = rebmun * 10;
		rebmun = rebmun + number % 10;
		number = number / 10;
	}
	return rebmun;
}

int main(int argc, char** argv) {
	cout << "Enter a number to reverse: ";
	int number, result;//initialising parametrs
	cin >> number;
	/*result = 0;
	while(number / 10 != 0)
	{
		result *= 10;
		result += number % 10;
		number = number / 10;
	}
	result *= 10;
	result += number % 10;
	cout <<"\nThe reverse of a number is ";
	cout << result;*/
	cout << reverted(number);
	return 0;
}
