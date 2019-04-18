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

class HerMajestyMeasurmentSystem
{
	private :
		double meters;	
	public :
		double inches;
		double feets;
		double StMiles;
		HerMajestyMeasurmentSystem(double m) : meters(m)
		{
			inches = m / 0.0254;
			feets = 0;
			StMiles = 0;
			while(inches > 12)
			{
				feets++;
				inches = inches - 12;
			}
			while(feets > 5280)
			{
				StMiles++;
				feets = feets - 5280;
			}
		}
		void dispInches()
		{
			cout << "There are " << inches << " inches" << endl;
		}
		void dispfeets()
		{
			cout << "There are " << feets << " feets" << endl;
		}
		void dispStMiles()
		{
			cout << "There are " << StMiles << " Statut Miles" << endl;
		}
		
		
};



int main(int argc, char** argv) {
	
	double meters;
	cout << "Enter meters ";
	cin >> meters;
	HerMajestyMeasurmentSystem HMMS1(meters);
	HMMS1.dispInches();
	cout << "Checking access to Inches " << HMMS1.inches << endl;
	HMMS1.dispfeets();
	cout << "Checking access to Feets " << HMMS1.feets << endl;
	HMMS1.dispStMiles();
	cout << "Checking acces to Statute Miles " << HMMS1.StMiles << endl;
	return 0;
}
