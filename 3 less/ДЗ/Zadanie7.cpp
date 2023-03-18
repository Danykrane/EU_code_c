#include <iostream>
using namespace std;
int main()
{
	short int chislo, palindrom = 0;
	cout << "Vvedit chislo: ";
	cin >> chislo;
	//12345
	for (int i = chislo; i != 0; i /= 10)
	{
		palindrom = palindrom * 10 + i % 10; 
		//5
		//54
		//543
		//5432
		//54321
	}
	(palindrom == chislo) ? cout << "Palindrom\n" : cout << "ne palindrom" << endl;
	return 0;
}