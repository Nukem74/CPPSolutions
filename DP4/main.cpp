#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, a, r;
	r = 0;
	a = 10;
	n = 314;
	cout << n;
	r = n % 10;
	r = r * 10;
	n = n / 10;
	r = r + (n % 10);
	r = r * 10;
	n = n / 10;
	r = r + (n % 10);
	cout << r;
	return 0;
}
