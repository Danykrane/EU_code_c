#include <iostream>
#include <cmath>
using namespace std;

class point
{
private:
	int x;
	int y;

public:
	point(int x = 0, int y = 0) : x(x), y(y){};

	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
};

double rasst(point &A, point &B)
{
	double r_x = abs(A.getX() - B.getX());
	double r_y = abs(A.getY() - B.getY());
	double rasst_x = r_x * r_x;
	double rasst_y = r_y * r_y;
	double res = sqrt(rasst_x + rasst_y);
	return res;
}

void show(double a)
{
	cout << a;
}

void show_point(point &test)
{
	cout << test.getX() << ":" << test.getY() << endl;
}

int main()
{
	point a(1);
	point b(5, 78);

	show_point(a);
	show_point(b);
	cout << endl;
	cout << rasst(a, b);
	return 0;
}