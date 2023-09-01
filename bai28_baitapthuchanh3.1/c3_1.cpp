#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n, S = 0;
    cout << "Enter integer n: ";
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            S += i;
            int temp = n / i;
            if (temp != i && temp != n){
                S += temp;
            }
        }
    }
    if (S == n){
        cout << n << " is a perfect number";
    }
    else{
        cout << n << " isn't a perfect number";
    }
}