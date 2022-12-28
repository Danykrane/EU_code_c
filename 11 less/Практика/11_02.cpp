#include <iostream>

using namespace std;

class Figure
{
    int len;
    int shir;

public:
    void setL(int lenght)
    {
        len = lenght;
    }

    void setS(int shirina)
    {
        shir = shirina;
    }

    void setAll(int val1, int val2)
    {
        len = val1;
        shir = val2;
    }

    int getL()
    {
        return len;
    }

    int getS()
    {
        return shir;
    }
};

void read(Figure &test)
{
    int a, b;
    cout << "Введите длину и ширину" << endl;
    cin >> a >> b;
    // test.len = a;
    // test.shir = b;

    test.setL(a); // инициализация поля len
    test.setS(b); // инициализация поля shir

    test.setAll(a, b);
    
    cout << "Данные успешно записаны" << endl;
}

int per(Figure &test)
{
    return 2 * (test.getL() + test.getS());
}

int sq(Figure &test)
{
    return test.getL() * test.getS();
}

void show(int val)
{
    cout << "Значение равно: " << val << endl;
}

class Figure3d
{

    Figure fig;
    int shir = 12;

public:
    int sq3d()
    {
        return shir * fig.getL() * fig.getS();
    }

    void setL(int value)
    {
        fig.setS(value);
    }

    void setW(int value)
    {
        fig.setL(value);
    }
};

int main()
{
    Figure kvadrat;
    read(kvadrat);
    show(per(kvadrat));
    show(sq(kvadrat));

    Figure3d kub;

    kub.setL(kvadrat.getL());
    kub.setW(kvadrat.getS());

    cout << kub.sq3d() << endl;
}