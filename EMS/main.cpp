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
