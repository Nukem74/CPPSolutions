#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*������������ �����, �������������� ����� ��������� (�������� � ������� ���������� ��������) 
������ ��������� ������������ �����. */
int main(int argc, char** argv) {
	int number; //������������� �������������� ����������
	cout << "Enter 3 digits to reverse: ";
	cin >> number;
	cout<< "\n";
	int result = 0; //������������� ���������� ����������
	int aloe = 10;// ������������� ��������
	for(int i = 0; i < 3; i++)
	{
		//���� ����� ���������������� 3� ������� �����
		result *= aloe;
		result += number % aloe;
		number /= aloe;
	}
	cout << "Reversed: ";
	cout << result;
	return 0;
}
