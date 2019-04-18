#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Time
{
	private:						//перечисление приватных членов
		int _hours;					//приватные поля int
		int _minutes;
		int _seconds;
	public:							//перечисление публичных членов
		Time()						//конструктор без аргументов
		{
			_hours = 0;
			_minutes = 0;
			_seconds = 0;
		}
		
		Time(int h, int m, int s): _hours(h) , _minutes(m) , _seconds(s)		//конструктор с 3 аргументами
		{
			while(_seconds >= 60)												//форматирование времени
			{
				_seconds -= 60;
				_minutes++;
			}
			while(_minutes >= 60)
			{
				_minutes -= 60;
				_hours++;
			}
			while(_hours >= 12)
			{
				_hours -= 12;
			}
		}
		void dispTime() const													//публичный метод отображающий приватные поля
		{
			cout << "\n" << _hours << ':' << _minutes << ':' << _seconds << endl;
		}
		void/*Time*/ addTime(Time a, Time b)											//публичный метод принимающий в качестве аргументов два объекта класса Time и изменяющий значение приватных полей
		{
			_hours = a._hours + b._hours;
			_minutes = a._minutes + b._minutes;
			_seconds = a._seconds + b._seconds;
			while(_seconds >= 60)														//форматирование времени
			{
				_seconds -= 60;
				_minutes++;
			}
			while(_minutes >= 60)
			{
				_minutes -= 60;
				_hours++;
			}
			while(_hours >= 12)
			{
				_hours -= 12;
			}
			
		}
		
};


int main(int argc, char** argv) {
	//демонстратор работы класса
	Time T1(0, 121, 61);
	Time T2(0, 0, 0);
	Time T3;
	T3.addTime(T1,T2);
	T3.dispTime();
	
	return 0;
}
