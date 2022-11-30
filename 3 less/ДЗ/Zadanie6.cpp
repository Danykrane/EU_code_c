#include <iostream>
using namespace std;
int main()
{
	int chislo;
	cout << "Vvedote chislo: ";
	cin >> chislo; //первоначальный ввод
	while (chislo)
	{

		int bf = 1;
		for (int i = 2; i <= chislo; i++)
		{
			bf *= i;
		}
		cout << chislo << "! =" << bf << endl;
		cout << "Vvedite chislo (0 dlya precrashenya): " << endl;

		cin >> chislo; //ввод еще раз

		if (chislo == 0)
		{
			cout << "Spasibo za 0 ^_^" << endl;
		}
	}
	return 0;
}