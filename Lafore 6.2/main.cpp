#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class tollBooth						//определение класса
{
	private:						//перечисление приватных членов
		unsigned int _counter;		//беззнаковое целочисленное приватное поле
		double _cash;				//приватное поле типа double
		const double _fee = 0.5;	//приватное постоянное поле типа double
	public:							//перечисление публичных членов
		tollBooth()					//конструктор без аргументов	
		{	
			_counter = 0;			//инициализация приватного поля
			_cash = 0;				//инициализация приватного поля
		}
		void payCar()				//метод изменяющий значения приватных полей
		{
			_counter++;
			_cash += _fee;
		}
		void freeCar()				//метод изменяющий значения приватных полей
		{
			_counter++;
		}
		void dispCounter() const	//метод отображающий приватное поле
		{
			cout << "There were " << _counter << " cars ATM" << endl;
		}
		void dispCash() const		//метод отображающий приватное поле
		{
			cout << "There is " << _cash << "$ in the Booth";
		}
};


int main(int argc, char** argv) {
	//демонстратор работы класса
	tollBooth TB1;
	char key;
	int counter = 0;
	cout << "Hello! Welcome to TollBooth 1.0" << endl;
	while(key != 'Q')
	{
		cout << "\nPress F for free car, or press P for paying car, or Q to quit shift" << endl;
		cin >> key;	
		if(key != 'Q')
		{
			cout << key;
			switch(key)
			{
				case ('F'):
					{
						TB1.freeCar();
						break;
					}
				case ('P'):
					{
						TB1.payCar();
						break;
					}
				default:
					{
						cout << "\nwrong key" << endl;
					}
			}
		}
		else
		{
			TB1.dispCounter();
			TB1.dispCash();
			cout << "\nHave a nice day";
			break;
		}
		
	}
	
	return 0;
}
