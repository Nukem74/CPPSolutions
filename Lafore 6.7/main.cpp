#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

enum direction { N, E, S, W	};

class Angle
{
	private:						//перечисление приватных членов
		int _deg;
		float _min;
		direction _dir;
	public:							//перечисление публичных членов
		Angle(int d, float m, direction x): _deg(d), _min(m), _dir(x)						//конструктор без аргументов
		{
			//empty
		}
		void setAngle(int d, float m)
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
		void setDirection(direction d)
		{
			_dir = d;
		}
		void dispAngle()const
		{
			cout << _deg << '\xF8' << _min << '\"' << _dir << endl;
		}
		
};


int main(int argc, char** argv) {
	
	
	return 0;
}
