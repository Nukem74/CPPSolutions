#include <iostream>
using namespace std;

/*���� ����������� ����� x � n (n <= 10). ������� �� ����� ����� x, ���������� � ������� ��������� � ���������� n.*/
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
	cout << "Enter a number, and a base";
	int number, base;//initialising operators
	cout << "\nEnter a number ";
	cin >> number;
	cout << "\nEnter a base ";
	cin >> base;
	int  result, temp;//initialising parametrs
	result = 0;
	while(number != 0)//reducing number to base
	{
		result *= 10;
		result += number % base;
		number = number / base;
	}
	result = reverted(result);
	cout << result;
	return 0;
}
