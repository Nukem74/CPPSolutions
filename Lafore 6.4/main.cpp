#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class employee
{
	private:						//������������ ��������� ������	
		int _ID;
		float _salary;
	public:							//������������ ��������� ������
		employee()					//����������� ��� ����������
		{
			//empty
		}
		void setID(int i)
		{
			_ID = i;
		}
		void setSAL(int s)
		{
			_salary = s;
		}
		void dispEmp()
		{
			cout << _ID << ':' << _salary << '$' << endl;
		}
};
int main(int argc, char** argv) {
	return 0;
}
