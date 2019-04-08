#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Даны два натуральных числа. Проверить, являются ли они дружественными.*/

int main(int argc, char** argv) {
	int first, second;//Initialising operators
	cout << "Frielndly?";
	cout <<"\n";
	cout << "Enter 2 numbers with same length, please";
	cout <<"\n";
	cout << "Enter first number ";
	cin >> first;
	cout <<"\n";
	cout << "Enter second number ";
	cin >> second;
	cout <<"\n";
	int chksum1 = 0;//initilising checksumm variables
	int chksum2 = 0;
	/*int counter1 = 0;//numberlength check
	while((first != 0) && (second != 0))
	{
		first = first / 10;
		second = second / 10;
		counter++;
		cout << first;
		cout << second;
		if(first == 0)
		{
			if(second != 0)
			{
				cout << "Different number length";
				break;
			}
		}
		if(second == 0)
		{
			if(first != 0)
			{
				cout << "Different number length";
				break;
			}
		}
	}*/
	for(int i = 1; i != first; i++)//Geting first checksumm
	{
		if(first % i == 0)
		chksum1 += i;
	}
	if(chksum1 == second)//If it's fit...
	{
		for(int i = 1; i != second; i++)//Getting second checksumm
		{
			if(second % i == 0)
			chksum2 += i;
		}
		if(chksum2 == first)
		{
			cout << "Friendly!";//Message for friendly numbers
		}
		else
		{
			cout << "Fire!";
		}
	}
	else
	{
		cout << "Fire!";
	}
	
	
	return 0;
}
