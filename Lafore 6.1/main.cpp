#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class INT								//����������� ������
{
	private:							//������������ ��������� ������
		int _intgr;						//������������� ��������� ����
	public:								//������������ ��������� ������
		void setzero()					//����� �������� �������� ���������� ����
		{
			_intgr = 0;
		}
		void setValue(int v)			//����� �������� �������� ���������� ����
		{
			_intgr = v;
		}
		void dispValue()				//����� ������������ � ���� ������� �������� ���������� ����
		{
			cout << _intgr;
		}
		int sumValue(INT a, INT b)		//����� ������������ ������������� �������� � ����������� � �������� ���������� ��� ������� ������ INT
		{
			_intgr = a._intgr+b._intgr;
		}
};

int main(int argc, char** argv) {
	//������������ ������ ������
	INT A, B, C;
	A.setValue(3);
	B.setValue(7);
	C.sumValue(A,B);
	C.dispValue();
	return 0;
}
