#include <iostream>
using namespace std;

/*������������. ���� ����������� ����� n ������� ����������� �����������. 
  ������������ � ������� �� ����� �����, �������������� ����� ��������� ������ n.*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Enter a number to reverse: ";
	int number, result;//initialising parametrs
	cin >> number;
	result = 0;
	while(number / 10 != 0)
	{
		result *= 10;
		result += number % 10;
		number = number / 10;
	}
	result *= 10;
	result += number % 10;
	cout <<"\nThe reverse of a number is ";
	cout << result;
	return 0;
}
