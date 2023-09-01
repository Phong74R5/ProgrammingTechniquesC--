#include <iostream>
#include <math.h>
using namespace std;
bool perfect_number_test(long n);
void output_perfect_number(int n);
int main(){
    long n, S = 0;
    cout << "Enter integer n: ";
    cin >> n;
    cout << "Perfect number: ";
    output_perfect_number(n);
}
bool perfect_number_test(long n){
    long S = 0;
    if (n == 1){
        return false;
    }
    for (int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            S += i;
            long temp = n / i;
            if (temp != i && temp != n){
                S += temp;
            }
        }
    }
    if (S == n){
        return true;
    }
    else{
        return false;
    }
}
void output_perfect_number(int n){
    for (int i = 1; i <= n; i++){
        if (perfect_number_test(i)){
            cout <<i<<"\t";
        }
    }
}