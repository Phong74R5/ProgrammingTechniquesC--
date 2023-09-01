#include <iostream>
using namespace std;
int fibonacci(int n);
int main(){
    int n;
    cout << "Enter integer n: ";
    cin >> n;
    cout <<"\nfibonacci: "<<fibonacci(n);
}
int fibonacci(int n){
    if(n==1||n==0){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}