#include <iostream>
using namespace std;
int main (){
    int i, n, sum;
    cout << "Enter integer n:";
    cin >> n;
    sum = 0;
    for (i = 1; i <= n; i++){
        sum += i;
    }
    cout << "Total from 1 to " <<  n << " :" << sum <<endl;
}