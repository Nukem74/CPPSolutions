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
		void setVal()
		{
			cout << "Enter numerator: ";
			cin >> _numerator;
			cout << "Enter denominator: ";
			cin >> _denominator;
		}
		void dispFrac()const
		{
			cout << _numerator << endl;
			cout << "__" << endl;
			cout << _denominator << endl;
		}
		void add(fraction a, fraction b)
		{
			_numerator = (a._numerator*b._denominator) + (a._denominator*b._numerator);
			_denominator = a._denominator * b._denominator;
		}
		
		
};

int main(int argc, char** argv) {
	fraction A, B, C;
	A.setVal();
	A.dispFrac();
	int number = 1;
		cout << "\nEnter new fraction to add, or 0 to quit" << endl;
		B.setVal();
		B.dispFrac();
		C.add(A,B);
		C.dispFrac();
	return 0;
}
