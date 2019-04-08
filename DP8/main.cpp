#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*¬ывести название дн€ недели по его номеру.*/
int main(int argc, char** argv) {
	int weekday;//»нициализаци€ переменной задающей день недели
	cout << "Enter a natural number in range 1 to 7";
	cin >> weekday;
	switch(weekday)
	{
		case 1: 
		{	
			cout << "Monday";
			break;
		}
		case 2: 
		{
			cout << "Tuesday";
			break;
		}
		case 3: 
		{
			cout << "Wednesday";
			break;
		}
		case 4:
		{
			cout << "Thursday";
			break;
		}
		case 5:
		{
			cout << "Friday";
			break;
		}
		case 6:
		{
			cout << "Saturday";	
			break;
		}
		case 7:
		{
			cout << "Sunday";
			break;
		}
		default:
		{
			cout << "Number out of range";
			break;
		}
	}
	
	return 0;
}
