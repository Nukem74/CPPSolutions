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
		Angle()
		{
			//empty
		}
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



class ship
{
	private:							//перечисление приватных членов
		static int _counter;
		int _sNumber;
		Angle _NS;
		Angle _WE;
	public:
		ship()
		{
			_counter++;
			_sNumber = _counter;
		}
		void dispSerial()const
		{
			cout << "\nSerial Number: " << _sNumber;
		}
		void setLocation()
		{
			cout << "\nSet ship's location";
			int deg = 0;
			float min = 0;
			char dir = '_';
			cout << "\nSet latitude: " << "\nSet Angle degrees: " << endl;
			cin >> deg;
			cout << "\n Set Angle minutes: " << endl;
			cin >> min;
			cout << "\n Set direction: " << endl;
			cin >> dir;
			_NS.setAngle(deg, min);
			_NS.setDirection(dir);
			_NS.dispAngle();
			deg = 0;
			min = 0;
			dir = '_';
			cout << "\nSet Longitude: " << "\nSet Angle degrees: " << endl;
			cin >> deg;
			cout << "\n Set Angle minutes: " << endl;
			cin >> min;
			cout << "\n Set direction: " << endl;
			cin >> dir;
			_WE.setAngle(deg, min);
			_WE.setDirection(dir);
			_WE.dispAngle();
		}
		void dispLocation()
		{
			cout << endl;
			_NS.dispAngle();
			cout << endl;
			_WE.dispAngle();
		}
};

int ship::_counter = 0;

int main(int argc, char** argv) {
	ship first, second, third;
	first.setLocation();
	second.setLocation();
	third.setLocation();
	first.dispSerial();
	first.dispLocation();
	second.dispSerial();
	second.dispLocation();
	third.dispSerial();
	third.dispLocation();
	return 0;
}
