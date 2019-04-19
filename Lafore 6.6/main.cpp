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
			while(_month >= 12)
			{
				cout << "\nWrong month entry";
				cout << "\nEnter month" << endl;
				cin >> _month;
			}
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
			cout << "Enter day" << endl;
			cin >> _day;
			while(_day >= _maxmonth)
			{
				cout << "\nWrong day entry";
				cout << "\nEnter day" << endl;
				cin >> _day;
			}
		}
		
		void dispDate() const
		{
			cout << _day << '/' << _month << '/' << _year;
		}
};

enum etype { laborer, secretary, manager, accountant, executive, researcher};


class employee
{
	private:						//перечисление приватных членов	
		int _ID;
		float _salary;
		date _hiredate;
		etype position;
	public:							//перечисление публичных членов
		employee()					//конструктор без аргументов
		{
			//empty
		}
		void setID(int i)			//публичный метод устанавливающий значение приватного поля
		{
			_ID = i;
		}
		void setSAL(int s)			//публичный метод устанавливающий значение приватного поля
		{
			_salary = s;
		}
		void dispEmp() const		//публичный метод отображающий содержимое приватных полей
		{
			cout << _ID << ':' << _salary << "$ from" << endl;
			cout << "Hired: "; 
			_hiredate.dispDate();
			cout << "position: " << position << endl; 
		}
		void setHireDate()
		{
			_hiredate.setDate();
		}
		void setPos(etype pos)
		{
			position = pos;
		}
};


int main(int argc, char** argv) {
	employee emp1;
	emp1.setHireDate();
	emp1.setID(0);
	emp1.setSAL(1000);
	emp1.setPos(accountant);
	emp1.dispEmp();
	return 0;
}
