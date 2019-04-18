#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class tollBooth						//����������� ������
{
	private:						//������������ ��������� ������
		unsigned int _counter;		//����������� ������������� ��������� ����
		double _cash;				//��������� ���� ���� double
		const double _fee = 0.5;	//��������� ���������� ���� ���� double
	public:							//������������ ��������� ������
		tollBooth()					//����������� ��� ����������	
		{	
			_counter = 0;			//������������� ���������� ����
			_cash = 0;				//������������� ���������� ����
		}
		void payCar()				//����� ���������� �������� ��������� �����
		{
			_counter++;
			_cash += _fee;
		}
		void freeCar()				//����� ���������� �������� ��������� �����
		{
			_counter++;
		}
		void dispCounter() const	//����� ������������ ��������� ����
		{
			cout << "There were " << _counter << " cars ATM" << endl;
		}
		void dispCash() const		//����� ������������ ��������� ����
		{
			cout << "There is " << _cash << "$ in the Booth";
		}
};


int main(int argc, char** argv) {
	//������������ ������ ������
	tollBooth TB1;
	char key;
	int counter = 0;
	cout << "Hello! Welcome to TollBooth 1.0" << endl;
	while(key != 'Q')
	{
		cout << "\nPress F for free car, or press P for paying car, or Q to quit shift" << endl;
		cin >> key;	
		if(key != 'Q')
		{
			cout << key;
			switch(key)
			{
				case ('F'):
					{
						TB1.freeCar();
						break;
					}
				case ('P'):
					{
						TB1.payCar();
						break;
					}
				default:
					{
						cout << "\nwrong key" << endl;
					}
			}
		}
		else
		{
			TB1.dispCounter();
			TB1.dispCash();
			cout << "\nHave a nice day";
			break;
		}
		
	}
	
	return 0;
}
