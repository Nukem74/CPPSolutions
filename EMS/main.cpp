#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
1 морская миля (nautical mile, Великобритания) = 10 кабельтовым = 1,853257 км
1 уставная миля (statute mile) = 5 280 футам = 1609,344 м
1 ярд (yard) = 3 футам = 0,9144 м
1 фут (foot) = 12 дюймам = 0,3048 м
1 дюйм (inch) =  2,54 см
*/
double ToInches(double m)
{
	double _Inches = m / 0.0254;
	return _Inches;
}

bool chkInches(double m)
{
	return(m > 0.0254);
}

double ToFeets(double m)
{
	double _feets = m / 0.3048;
	return _feets;
}

bool chkFeets(double m)
{
	return(m > 0.3048);
}

double ToYards(double m)
{
	double _yards = m / 0.9144;
	return _yards;
}

bool chkYards(double m)
{
	return (m > 0.9144);
}

double ToStMiles(double m)
{
	double _StMiles = m / 1609.344;
	return _StMiles;
}

bool chkStMiles(double m)
{
	return(m > 1609.344);
}

double ToNauMiles(double m)
{
	double _NauMiles = m /  1853.257;
	return _NauMiles;
}

bool chkNauMiles(double m)
{
	return (m > 1853.257);
}
int main(int argc, char** argv) {
	
	double meters;
	cout << "Enter meters ";
	cin >> meters;
	int StMiles, Yards,Feets,Inches;
	if(chkStMiles(meters))
	{
		StMiles = (int)ToStMiles(meters);
		cout << "There are " << StMiles << "Miles" << endl;
	}
	if(chkYards(meters))
	{
		Yards = (int)ToYards(meters);
		cout << "There are " << Yards << "Yards" << endl;
	}
	if(chkFeets(meters))
	{
		Feets = (int)ToFeets(meters);
		cout << "There are " << Feets << "Feets" << endl;
	}
	if(chkInches(meters))
	{
		Inches = (int)ToInches(meters);
		cout << "There are " << Inches << "Inches" << endl;
	}
	return 0;
}
