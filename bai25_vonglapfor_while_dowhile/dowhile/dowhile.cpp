#include <iostream>
using namespace std;
int main (){
    int i, n, sum;
    cout << "Enter integer n: ";
    cin >> n;
    sum = 0;
    i =  1;
    do{
        sum += i;
        i++;
    }
    while (i <= n);
    cout << "Total from 1 to " << n << ": " << sum <<endl;
}