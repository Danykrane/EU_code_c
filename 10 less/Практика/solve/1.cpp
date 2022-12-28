#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

void show(const int &l, const int &pr)
{
    for (char i = l; i <= pr; i++)
    {
        cout << static_cast<int>(i) << " " << i << endl;
    }
}

void check(const char &l)
{
    (isdigit(l)) ? cout << "DIGIT" : isupper(l) ? cout << "BIG"
                                                : cout << "TINY";
}


int main()
{
    char str[256];
    char arr[26] = {'A', 'E', 'I', 'O', 'U', 'Y'};

    int size = strlen(arr);

    // for (char ch : arr)
    // {
    //     ch = (char)tolower(ch);
    // }
    for (int i = 0; i < size; i++)
    {
        arr[i + size] = (char)tolower(arr[i]);
    }
    for (int i = 0; i < 2 * size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cin.getline(str, 50, '.');
    int cnt = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = 0; j < 2 * size; j++)
        {
            if (str[i] == arr[j])
                cnt++;
        }
    }

    cout << cnt;

    // for (char ch : str)
    // {
    // }
}
