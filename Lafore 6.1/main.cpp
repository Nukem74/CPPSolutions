#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class INT								//определение класса
{
	private:							//перечисление приватных членов
		int _intgr;						//целочисленное приватное поле
	public:								//перечисление публичных членов
		void setzero()					//метод задающий значение приватного поля
		{
			_intgr = 0;
		}
		void setValue(int v)			//метод задающий значение приватного поля
		{
			_intgr = v;
		}
		void dispValue()				//метод отображающий в окне консоли значение приватного поля
		{
			cout << _intgr;
		}
		int sumValue(INT a, INT b)		//метод возвращающий целочисленное значение и принимающий в качестве аргументов два объекта класса INT
		{
			_intgr = a._intgr+b._intgr;
		}
};

int main(int argc, char** argv) {
	//Демонстратор работы класса
	INT A, B, C;
	A.setValue(3);
	B.setValue(7);
	C.sumValue(A,B);
	C.dispValue();
	return 0;
}
