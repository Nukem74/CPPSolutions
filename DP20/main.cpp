#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number, score;
	score = 0;
	cout << "Bring on THE CHALLENGER";
	cin >> number;
	for(int i = 1; i != number; i++)
	{
		if(number % i == 0)
		{
			score = score + i;
		}
	}
	if(score == number)
	{
		cout << "THE CHALLENGER IS PERFECT";
	}
	else
	{
		cout << "BEGONE, FILTH!";
	}
	return 0;
}
