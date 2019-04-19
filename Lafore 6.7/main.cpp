#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



class Angle
{
	private:						//перечисление приватных членов
		int _deg;
		float _min;
		char _dir;
	public:							//перечисление публичных членов
		Angle(int d, float m, char x): _deg(d), _min(m), _dir(x)						//конструктор с тремя аргументами
		{
			//empty
		}
		void setAngle(int d, float m)		//метод задающий значения приватных полей
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
		void setDirection(char d)			//метод задающий значение приватного поля
		{
			_dir = d;
		}
		void dispAngle()const				//метод отображающий в консоли значения приватных полей
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
