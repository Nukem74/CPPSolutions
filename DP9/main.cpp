#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int foursquare, upperlefttriangle, lowerrighttrianlge;
	foursquare = 3223;
	upperlefttriangle = foursquare % 100;
	foursquare = foursquare / 100;
	lowerrighttrianlge = foursquare % 10;
	foursquare = foursquare / 10;
	lowerrighttrianlge = lowerrighttrianlge * 10;
	lowerrighttrianlge = lowerrighttrianlge + (foursquare % 10);
	if (lowerrighttrianlge == upperlefttriangle)
	{
		cout << "Is palindrome";
	}
	else
	{
		cout << "Is NOT palindrome";
	}
	
	return 0;
}
