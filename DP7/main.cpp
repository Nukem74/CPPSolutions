#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*���� ��� �����. ������� �� ����� �� �� ���, ������� ������.*/
int main(int argc, char** argv) {
	
	double first, second, third;//������������� ������������ ����������
	cout << "Enter first number: ";
	cin >> first;
	cout << "Enter second number: ";
	cin >> second;
	cout << "Enter third number: ";	
	cin >> third;
	if(first > second)
	{
		if(first > third)
		cout << first;
		else
		cout << third;
	}
	else
	{
		if(second > third)
		cout << second;
		else
		cout << third;
	}
	return 0;
}
