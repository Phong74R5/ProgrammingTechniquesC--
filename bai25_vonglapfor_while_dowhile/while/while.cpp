#include <iostream>
using namespace std;
int main (){
    int i, n, sum;
    cout << "Enter integer n: ";
    cin >> n;
    sum = 0;
    i =  1;
    while (i <= n){
        sum += i;
        i++;
    }
    cout << "Total from 1 to " << n << ": " << sum <<endl;
}