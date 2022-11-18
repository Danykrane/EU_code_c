#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

int x;
cin >> x;
//float rez = (pow(x, 2) + sin(x) - sqrt(x)) / pow(x, -2);
cout << fixed << setprecision(5) << (pow(x, 2) + sin(x) - sqrt(x)) / pow(x, -2.0) << endl;


}
