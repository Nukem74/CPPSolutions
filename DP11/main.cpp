#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int insp, res;
	insp = 24;
	res = 0;
	res = insp % 2;
	res = res * 10;
	insp = insp / 2;
	res = res + insp % 2;
	res = res * 10;
	insp = insp / 2;
	res = res + insp % 2;
	res = res * 10;
	insp = insp / 2;
	res = res + insp % 2;
	res = res * 10;
	insp = insp / 2;
	res = res + insp % 2;
	res = res * 10;
	int left, right;
	left = res % 1000;
	right = res / 1000;
	cout << left;
	cout << "/n";
	cout << right;
	if(right == left)
	{
		cout << "Is binary palindrome";
	}
	else
	{
		cout << "Is NOT binary palindrome";
	}

	
	return 0;
}
