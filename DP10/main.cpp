#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int luckystrike, upperstrike, lowerstrike;
	luckystrike = 1415;
	lowerstrike = 0;
	upperstrike = 0;
	lowerstrike += luckystrike % 10;
	luckystrike = luckystrike / 10;
	lowerstrike += luckystrike % 10;
	luckystrike = luckystrike / 10;
	upperstrike += luckystrike % 10;
	luckystrike = luckystrike / 10;
	upperstrike += luckystrike % 10;
	if (lowerstrike == upperstrike)
	{
		cout << "Lucky!";
	}
	else
	{
		cout << "bad luck =(";
	}
	return 0;
}
