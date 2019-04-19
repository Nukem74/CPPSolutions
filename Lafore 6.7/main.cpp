#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



class Angle
{
	private:						//������������ ��������� ������
		int _deg;
		float _min;
		char _dir;
	public:							//������������ ��������� ������
		Angle(int d, float m, char x): _deg(d), _min(m), _dir(x)						//����������� � ����� �����������
		{
			//empty
		}
		void setAngle(int d, float m)		//����� �������� �������� ��������� �����
		{
			_deg = d;
			while(_deg >= 180)
			{
				_deg = _deg - 180;
			}
			_min = m;
			while(_min >= 60)
			{
				_min = _min - 60;
			}
		}
		void setDirection(char d)			//����� �������� �������� ���������� ����
		{
			_dir = d;
		}
		void dispAngle()const				//����� ������������ � ������� �������� ��������� �����
		{
			cout << _deg << '\xF8' << _min << '\"' << _dir << endl;
		}
		
};


int main(int argc, char** argv) {
	Angle A(130, 22.1, 'E');
	
	char key;
	int deg;
	float min;
	while(key != 'Q')
	{	
		A.dispAngle();
		cout << "\nEnter new angle" << endl;
		cin >> deg;
		cout << '\xF8';
		cin >> min;
		cout << '\"';
		A.setAngle(deg, min);
		cout << "\nSet direction ";
		cin >> key;
		A.setDirection(key);
		
	}
	
	return 0;
}
