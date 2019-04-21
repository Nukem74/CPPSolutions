#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char** argv) {
	ship first, second, third;
	first.setLocation();
	second.setLocation();
	third.setLocation();
	first.dispSerial();
	first.dispLocation();
	second.dispSerial();
	second.dispLocation();
	third.dispSerial();
	third.dispLocation();
	return 0;
}
