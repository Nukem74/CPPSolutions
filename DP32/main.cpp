#include <iostream>
using namespace std;
/*���� ����������� ����� n. ���������, ������������ ��� �� ����� ��� ������������ ������ ������ ���������� ������������������. 
��� ���� ������������������ �� ����� ����� ������� ������ ����������.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Enter a number ";
	int number;//initialising parametr
	cin >> number;
	int chknum1 = number % 8;
	number /= 8;
	int chknum2 = number % 8;
	number /= 8;
	int delta = chknum1 - chknum2;
	while(number / 8 != 0)
	{
		chknum1 = chknum2;
		chknum2 = number % 8;
		number /= 8;
		if(delta * (chknum1-chknum2) <= 0)
		{
			cout << "\nNumber is not dull";
		}
	}
	chknum1 = chknum2;
	chknum2 = number % 8;
	if(delta * (chknum1-chknum2) > 0)
	{
		cout << "\nThe number is dull";
	}
	else
	{
		cout << "\nNumber is not dull";
	}
	return 0;
}
