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

    void show()
    {
        cout << x << " " << y << endl;
    }
};

double rasst(point *A, point *B)
{
    double r_x = abs(A->getX() - B->getX());
    double r_y = abs(A->getY() - B->getY());
    double rasst_x = r_x * r_x;
    double rasst_y = r_y * r_y;
    double res = sqrt(rasst_x + rasst_y);
    return res;
}

double rasst(int x1, int y1, int x2, int y2)
{
    double r_x = abs(x1 - x2);
    double r_y = abs(y1 - y2);
    double rasst_x = r_x * r_x;
    double rasst_y = r_y * r_y;
    double res = sqrt(rasst_x + rasst_y);
    return res;
}

double *find_rast(point **ptr, int size)
{
    double *temp = new double[size / 2];
    int j = 0;
    for (int i = 0; i < size; i += 2)
    {
        temp[j] = rasst(ptr[i], ptr[i + 1]);
        j++;
    }
    return temp;
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

    cout << "Укажите кол-во точек" << endl;
    int col;
    cin >> col;
    point **ptr_arr = new point *[col];

    for (int i = 0; i < col; i++)
    {
        int val1 = 0, val2 = 0;
        cout << "Введите координаты X и Y" << endl;
        cin >> val1 >> val2;
        ptr_arr[i] = new point(val1, val2);
    }

    for (int i = 0; i < col; i++)
    {
        ptr_arr[i]->show();
    }

    double *rasst_arr = find_rast(ptr_arr, col);

    for (int i = 0; i < col / 2; i++)
    {
        cout << rasst_arr[i] << " ";
    }

    for (int i = 0; i < col; i++)
    {
        delete[] ptr_arr[i];
    }

    delete[] ptr_arr;
    delete[] rasst_arr;
    return 0;
}