#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*���� ��� �����. ������� �� ����� �� �� ���, ������� ������.*/
int main(int argc, char** argv) {
	double first, second;
	cout << "Enter first number:";
	cin >> first;//������������� ������� �����
	cout <<"Enter second number";
	cin >> second;//������������� ������� �����
	if (first > second)
	{
		cout << first;
	}
	else
	{
		cout << second;
	}
	
	return 0;
}
