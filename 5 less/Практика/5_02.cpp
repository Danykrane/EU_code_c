#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{

int arr[100] = {};

int n; 
cin >>n;
srand(time(0));
for (int i = 0; i < n; i++){
    arr[i] = -34 + rand()  % 100; 
}

for (int i = 0; i < n; i++){
    cout <<arr[i] <<" "; 
}
}