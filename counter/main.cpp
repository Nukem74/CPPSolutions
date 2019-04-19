#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Counter
{
	private: unsigned int count; //приватное целочисленное беззнаковое поле
	public: //перечисление публичных членов
		Counter() :	count(0)//конструктор принадлежащий классу Counter
		{
			cout << "Constructor\n";
		}
		void inc_counter()//публичная функция принимающая и возвращающая ничего
		{
			count++;//инкремент приватного поля
		}
		int get_count()//публичная функция принимающая и возвращающая ничего
		{
			return count;
		}
};

int main(int argc, char** argv) {
	Counter c1, c2;
	cout << "\nc1=" << c1.get_count();
	cout << "\nc2=" << c2.get_count();
	c1.inc_counter();
	c2.inc_counter();
	c2.inc_counter();
	cout << "\nc1=" << c1.get_count();
	cout << "\nc2=" << c2.get_count();
	return 0;
}
