#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int n;
    double x, K, K1 ,K2;
    cout << "Input integer n: ";
    cin >> n;
    cout << "Input real number x: ";
    cin >> x;
    K2 = pow((pow(x, 2) + x +1), n);
    K1 = pow((pow(x, 2) - x + 1), n);
    K = K1 + K2;
    cout << "\nResult: " << K;
}