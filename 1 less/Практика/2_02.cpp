#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){



/*
int a;
 cin >> a;
 if (a % 5 == 0) {
  cout << "Кратно!";
 }

 if (a % 5 != 0) cout <<" Не кратно";
*/

 
// if (a % 2 == 0) cout << "Да";
// else cout << "Нет";
int a;
cin >> a;
bool flag = (a % 2 == 0);
if(flag) cout <<"Число четное";

// cout << rez;

(a > 0)? cout <<"Больше":(a == 0)? cout <<"Равно 0": cout <<"Меньше";


// 1 - > 0
// 2 -  < 0
// 3 - =0 
// int a;
//  cin >> a;
 /*
 if ((a > -4 && a < 9) || (a == 18)  ||(a > 65 && a <= 90)) {
  cout << "Принадлежит";
 }
 else {
  cout << "Не принадлежит";
 }
 */

// if ((a > -4 && a < 9)) cout <<"Прин перв мнтервалу";
// else if (a == 18 )cout <<" равно 18";
// else if ((a > 65 && a <= 90))cout <<" Прин 3 полинтер";
// else cout <<"ничему";

// bool flag = 0;

//  if ((a > -4 && a < 9) || (a == 18)  ||(a > 65 && a <= 90)) {
//   flag = 1;
//  }
//  else {
//   cout << "Не принадлежит";
//  }

// if (flag) cout << "Prin";
// else cout << "Ne prin";



}