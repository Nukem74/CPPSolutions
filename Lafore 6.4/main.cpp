#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class employee
{
	private:						//перечисление приватных членов	
		int _ID;
		float _salary;
	public:							//перечисление публичных членов
		employee()					//конструктор без аргументов
		{
			//empty
		}
		void setID(int i)			//публичный метод устанавливающий значение приватного поля
		{
			_ID = i;
		}
		void setSAL(int s)			//публичный метод устанавливающий значение приватного поля
		{
			_salary = s;
		}
		void dispEmp() const		//публичный метод отображающий содержимое приватных полей
		{
			cout << _ID << ':' << _salary << '$' << endl;
		}
};
int main(int argc, char** argv) {
	employee emp1, emp2;
	emp1.setID(0);
	emp1.setSAL(1000);
	emp2.setID(1);
	emp2.setSAL(1);
	emp1.dispEmp();
	emp2.dispEmp();
	return 0;
}
