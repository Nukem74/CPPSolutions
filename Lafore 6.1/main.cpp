#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Int
{
	private:
		int _intgr;
	public:
		void setzero()
		{
			_intgr = 0;
		}
		void setValue(int v)
		{
			_intgr = v;
		}
		void dispValue()
		{
			cout << _intgr;
		}
		int sumValue(int a, int b)
		{
			return(a+b);
		}
};

int main(int argc, char** argv) {
	Int A, B, C;
	
	return 0;
}
