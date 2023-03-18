#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// cout << "Zadanie 5" << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << "*" << i << "*" << i << " = " << pow(i, 3) << endl;
	}
	cout << endl;
	// cout << "Zadanie 4" << endl;
	for (int i = 1; i <= 10; i++)
	{
		int otvet = 0;
		cout << i << " * 11 = ";
		otvet = i * 11;
		cout << otvet << endl;
	}
	cout << endl;
	// cout << "Zadanie 3" << endl;
	for (int i = 100; i >= 1; i--)
	{
		cout << i << " ";
	}

	return 0;
}