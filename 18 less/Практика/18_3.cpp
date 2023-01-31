
#include <iostream>
using namespace std;

class calculate
{
    char op;

public:
    calculate(char op) : op(op) {}
    int operator()(int op1, int op2)
    {
        switch (op)
        {
        case '+':
            return op1 + op2;
        case '-':
            return op1 - op2;
        case '*':
            return op1 * op2;
        case '/':
            return op1 / op2;
        case '%':
            return op1 % op2;
        case '^':
        {
            int ret = op1;
            while (op2-- > 1)
                ret *= op1;
            return ret;
        }
        default:
            cout << "неразрешённая операция" << endl;
            return 0;
        }
    }
};

int main()
{

    char oper;
    int op1, op2;
    cout << "выражение для вычисления (<op1><знак><op2>): " << endl;
    cin >> op1 >> oper >> op2;
    cout << op1 << ' ' << oper << ' ' << op2 << " = "
         << calculate(oper)(op1, op2) << endl;

    return 0;
}