#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
1 ������� ���� (nautical mile, ��������������) = 10 ����������� = 1,853257 ��
1 �������� ���� (statute mile) = 5 280 ����� = 1609,344 �
1 ��� (yard) = 3 ����� = 0,9144 �
1 ��� (foot) = 12 ������ = 0,3048 �
1 ���� (inch) =  2,54 ��
*/

class HerMajestyMeasurmentSystem
{
	private :
		double meters;
		void getInches(double m)
		{
			inches = m / 0.0254;
		}
		void getFeets(double i)
		{
			while(i > 12)
			{
				feets++;
				i = i - 12;
			}
		}
		void getMiles(double f)
		{
			while(f > 5280)
			{
				StMiles++;
				f = f - 5280;
			}
		}
	
		
	public :
		double inches;
		double feets;
		double StMiles;
		double getMeters(double m)
		{
			meters = m;
		}
		getInches(meters);
		getFeets(inches);
		getMiles(feets);
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


/*double ToFeets(double m)
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
}*/
int main(int argc, char** argv) {
	
	double meters;
	cout << "Enter meters ";
	cin >> meters;
	HerMajestyMeasurmentSystem HMMS1;
	HMMS1.getMeters(meters);
	HMMS1.dispInches();
	cout << "Checking access to Inches " << HMMS1.inches << endl;
	HMMS1.dispfeets();
	cout << "Checking access to Feets " << HMMS1.feets << endl;
	HMMS1.dispStMiles();
	cout << "Checking acces to Statute Miles " << HMMS1.StMiles << endl;
	return 0;
}
