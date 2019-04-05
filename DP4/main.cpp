#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Сформировать число, представляющее собой реверсную (обратную в порядке следования разрядов) 
запись заданного трехзначного числа. */
int main(int argc, char** argv) {
	int number; //Инициализация обрабатываемой переменной
	cout << "Enter 3 digits to reverse: ";
	cin >> number;
	cout<< "\n";
	int result = 0; //Инициализация переменной результата
	int aloe = 10;// Инициализация делителя
	for(int i = 0; i < 3; i++)
	{
		//Тело цикла разворачивающего 3х значное число
		result *= aloe;
		result += number % aloe;
		number /= aloe;
	}
	cout << "Reversed: ";
	cout << result;
	return 0;
}
