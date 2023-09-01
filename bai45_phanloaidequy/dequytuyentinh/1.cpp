#include <iostream>
using namespace std;
int factorial(int n);
int main(){
    int n;
    cout << "Enter integer n: ";
    cin >> n;
    cout <<"\n"<<n<<"!="<<factorial(n);
}
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}