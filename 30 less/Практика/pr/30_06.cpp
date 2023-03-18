#include <iostream>
#include <cstring>

using namespace std;

class String
{
    int len_str;
    char *string;

public:
    String()
    {
        len_str = 0;
        string = new char[1];
        string[0] = '\0';
    }
    String(char *test)
    {
        len_str = strlen(test);
        string = new char[len_str + 1];
        strncpy(string, test, len_str);
    }
    String(const String &test)
    {
        len_str = test.len_str;
        string = new char[len_str + 1];
        strncpy(string, test.string, len_str);
        string[len_str] = '\0';
    }

    void push_back(char temp)
    {
        char *rez = new char[len_str + 1];
        strcpy(rez, string);
        rez[len_str] = temp;
        delete[] string;
        string = rez;
        len_str++;
    }
    void insert(const char &temp, const int &pos)
    {
        char *rez = new char[len_str + 1];

        for (int i = 0; i < pos; ++i)
        {
            rez[i] = string[i];
        }
        rez[pos] = temp;
        for (int i = pos + 1; i < len_str + 1; ++i)
        {
            rez[i] = string[i];
        }

        delete[] string;
        string = rez;
        len_str++;
    }

    String operator*(const int &num)
    {
        String rez = *this;
        for (int i = 0; i < num; i++)
        {
            rez = rez + *this;
        }
        return rez;
    }
    ~String()
    {
        delete[] string;
    }

    friend istream &operator>>(istream &, String &);
    friend ostream &operator<<(ostream &, const String &);
};

istream &operator>>(istream &in, String &rez)
{
    char temp[1000000];
    in.getline(temp, 1000000);
    if (rez.len_str != 0)
        delete[] rez.string;

    rez.len_str = strlen(temp);
    rez.string = new char[rez.len_str + 1];
    for (int i = 0; i < rez.len_str; ++i)
    {
        rez.string[i] = temp[i];
    }
    rez.string[rez.len_str] = '\0';
    return in;
}

ostream &operator<<(ostream &out, const String &rez)
{
    out << rez.string;
    return out;
}

int main()
{
    String str("Hello");

    char temp = 'w';
    str.push_back(temp);

    str.insert('!', 1);
    // дз pop_back()
    cout << str << endl;

    string str1 = "12";
    cout << str1 * 2 << endl; // 1212
}