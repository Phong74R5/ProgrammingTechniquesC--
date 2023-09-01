#include <iostream>
using namespace std;
int main (){
    int n, i = 0, tong = 0;
    cout << "Enter number: ";
    cin >> n;
    calc: tong += i;
    i++;
    if (i <= n)
    {
        goto calc;
    }
    cout << "Sum of 1 + 2 + 3 + ... + n = " << tong <<endl;;
}