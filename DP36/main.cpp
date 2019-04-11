#include <iostream>
using namespace std;

/*Даны натуральные числа m и n. Вывести на экран их наименьший нетривиальный делитель или сообщить, что его нет. */
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Enter two numbers to find their lesser untrivial divider ";
	int first, second;
	cout << "\nEnter first number ";
	cin >> first;
	cout << "\nEnter second number ";
	cin >> second;
	int lesnum = 0;
	if(first > second)
	{
		lesnum = second;
	}
	if(first < second)
	{
		lesnum = first;
	}
	bool chkbox = false;
	for(int i = 2; i <= lesnum; i++)
	{
		if(first % i == 0)
		{
			if(second % i == 0)
			{
				cout << "\nLesser untrivial divider is ";
				cout << i;
				chkbox = true;
				break;
			}
		}
	}
	if(!chkbox)
	{
		cout << "\nThere is no common untrivial divider";	
	}	
	return 0;
}
