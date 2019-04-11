#include <iostream>
using namespace std;

/*Дано натуральное число n. Проверить, является ли оно счастливым билетом.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Give n: ";
	int number, temp, left, right; //initialising variables
	cin >> number;
	int length = 0;//initialising length counter
	temp = number;
	left = 0;//setting cheksum variables to 0
	right = 0;
	while(temp != 0)//checking number's length
	{
		length++;
		temp = temp / 10;
	}
	for(int i = 0; i < length / 2; i++)//getting left part of number
	{
		
		left = left + number % 10;
		number = number / 10;
	}
	if(length % 2 != 0)
	{
		number = number / 10;//removing odd middle
	}
	while(number != 0)//getting right part of number
	{
		
		right = right + number % 10;
		number = number / 10;
	}
	if(left == right)//Dispaying answer
	{
		cout << "\nLucky!";
	}
	else
	{
		cout << "\nBad luck=(";
	}
	
	
	return 0;
}
