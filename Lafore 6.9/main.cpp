#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class fraction
{
	private:						//перечисление приватных членов
		int _numerator;
		int _denominator;
	public:							//перечисление публичных членов
		fraction()					//конструктор без аргументов
		{
			//empty
		}
		void setVal(int n, int d)
		{
			cout << "Enter numerator: ";
			cin >> n;
			_numerator = n;
			cout << "Enter denominator: ";
			cin >> d;
			_denominator = d;
		}
		void dispFrac()const
		{
			cout << _numerator << endl;
			cout << "__";
			cout << _denominator << endl;
		}
		void add(fraction a, fraction b)
		{
			_numerator = (a._numerator*b._denominator) + (a._denominator*b._numerator);
			_denominator = a._denominator * b._denominator;
		}
		
		
};

int main(int argc, char** argv) {

	return 0;
}
