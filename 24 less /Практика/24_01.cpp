#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream input("data.txt");
    ofstream out("out.txt");
    double wes, rost, val;
    input >> wes >> rost >> val;
    cout << wes << " " << rost << " " << val << endl;

    out << "Вес и рост клиента равны: " << wes << " " << rost << endl;
    out << "Рост/вес: " << rost / wes << endl;
}