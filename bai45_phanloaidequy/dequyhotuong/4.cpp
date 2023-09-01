#include <iostream>
using namespace std;
int Xn(int n);
int Yn(int n);
int main(){
    int n;
    cout << "Enter integer n: ";
    cin >> n;
    cout <<"Xn="<<Xn(n)<<endl
         <<"Yn="<<Yn(n)<<endl;
}
int Xn(int n){
    if(n == 0){
        return 1;
    }
    return Xn(n-1)+Yn(n-1);
}
int Yn(int n){
    if(n == 0){
        return 1;
    }
    return n*n*Xn(n-1)+Yn(n-1);
}