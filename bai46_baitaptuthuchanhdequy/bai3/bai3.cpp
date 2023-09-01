#include <iostream>
using namespace std;
int X(int);
int Y(int);
int main(){
    int n;
    cout <<"Enter integer n: ";
    cin >>n;
    cout <<"X("<<n<<")="<<X(n)<<endl
    <<"Y("<<n<<")="<<Y(n);
}
int X(int n){
    if(n == 0){
        return 1;
    }
    return X(n-1)+Y(n-1);
}
int Y(int n){
    if(n == 0){
        return 0;
    }
    return 3*X(n-1)+2*Y(n-1);
}