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
			while(_seconds >= 60)
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
		void dispTime() const
		{
			cout << "\n" << _hours << ':' << _minutes << ':' << _seconds << endl;
		}
		Time addTime(Time a, Time b)
		{
			_hours = a._hours + b._hours;
			_minutes = a._minutes + b._minutes;
			_seconds = a._seconds + b._seconds;
			while(_seconds >= 60)
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
	return 0;
}
