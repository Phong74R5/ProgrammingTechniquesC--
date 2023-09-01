#include <iostream>
using namespace std;
float Sn(int n);
int main(){
    int n;
    cout <<"Enter integer n: ";
    cin >>n;
    cout <<"Sn="<<Sn(n);
}
float Sn(int n){
    if(n == 1){
        return 0.5;
    }
    return Sn(n-1)+1.0 / (n*(n+1));
}