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

int main()
{
    Figure kvadrat;
    read(kvadrat);
    show(per(kvadrat));
    show(sq(kvadrat));
}