#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int n;
    double x, T;
    cout << "Input integer n: ";
    cin >> n;
    cout << "Input real number x: ";
    cin >> x;
    T = x * n / 2 + 2.32 * pow(x, 3);
    cout << "\nResult: " << T;
}