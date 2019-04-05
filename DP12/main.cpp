#include <iostream>
using namespace std;
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double alfa, bravo, charlie, delta, salmon, salmonP, salmonN;
	cout << "Insert Alfa";
	cin >> alfa;
	cout << "Insert Bravo";
	cin >> bravo;
	cout << "insert Charlie";
	cin >> charlie;
	
	delta = (bravo * bravo) - 4 * alfa * charlie;
	if(delta < 0)
	{
		cout << "I've got no roots";
	}
	else
	{
		if(delta > 0)
		{
		salmonP = (- bravo + sqrt(delta))/(2 * alfa);
		cout << " The positive salmon is ";
		cout << salmonP;
		
		salmonN = (- bravo - sqrt(delta))/(2 * alfa);
		cout << " The salmon is ";
		cout << salmonN;
		}
		else
		{
		
		salmon = (- bravo + sqrt(delta))/(2 * alfa);
		cout << " The salmon is ";
		cout << salmon;
		
		}
	}
	return 0;
}
