#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream input("files/data1.txt");
    ofstream out("files/out1.txt");
    double val1, val2;
    input >> val1 >> val2;

    out << val1 << "-" << val2 << " = " << val1 - val2 << endl;
    out << val1 << "+" << val2 << " = " << val1 + val2 << endl;
    out << val1 << "*" << val2 << " = " << val1 * val2 << endl;
}