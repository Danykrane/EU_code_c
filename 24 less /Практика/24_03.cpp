#include <fstream>
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ifstream input("files/data2.txt");

    int size, step;
    if (input.is_open()) // существование файла
    {
        input >> size;
        deque<double> wes(size);
        for (auto &data : wes)
        {
            input >> data;
        }
        input >> step;

        ofstream out("files/out2.txt", ios::app | ios::out);
        out << "Веса котов: " << endl;
        int cnt = 0;
        for (auto &data : wes)
        {
            if (cnt % step == 0)
                out << data << " ";
            cnt++;
        }
        out << endl;
        cnt = 0;
        out << "Веса собак: " << endl;
        for (auto &data : wes)
        {
            if (cnt % step != 0)
                out << data << " ";
            cnt++;
        }
    }
    else
        cout << "Файл не найден";
}