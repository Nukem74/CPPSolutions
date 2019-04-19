#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class date
{
	private:						//перечисление приватных членов
		int _day;
		int _month;
		int _maxmonth;
		int _year;
	public:							//перечисление публичных членов
		date()
		{
			
		}
		void setDate()
		{
			cout << "Date record" << endl << "Enter year" << endl;
			cin >> _year;
			cout << "Enter month" << endl;
			cin >> _month;
			cout << "Enter day" << endl;
			cin >> _day;
			switch(_month)
			{
				case 1:
					{
						_maxmonth = 31;
						break;
					}
				case 2:
					{
						_maxmonth = 28;
						break;
					}
				case 3:
					{
						_maxmonth = 31;
						break;
					}
				case 4:
					{
						_maxmonth = 30;
						break;
					}
				case 5:
					{
						_maxmonth = 31;
						break;
					}
				case 6:
					{
						_maxmonth = 30;
						break;
					}
				case 7:
					{
						_maxmonth = 31;
						break;
					}
				case 8:
					{
						_maxmonth = 31;
						break;
					}
				case 9:
					{
						_maxmonth = 30;
						break;
					}
				case 10:
					{
						_maxmonth = 31;
						break;
					}
				case 11:
					{
						_maxmonth = 30;
						break;
					}
				case 12:
					{
						_maxmonth = 31;
						break;
					}
			}
		}
		
		void dispDate()
		{
			if(_day >= _maxmonth)
			{
				cout << "\nWrong day entry";
			}
			if(_month >= 12)
			{
				cout << "\nWrong month entry";
			}
			cout << _day << '/' << _month << '/' << _year;
		}
};

int main(int argc, char** argv) {
	date today;
	today.setDate();
	today.dispDate();
	return 0;
}
