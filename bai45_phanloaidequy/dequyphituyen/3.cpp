#include <iostream>
#include <math.h>
using namespace std;
int Xn(int n);
int main(){
    int n;
    cout << "Enter integer n: ";
    cin >> n;
    cout <<"X("<<n<<")="<<Xn(n);
}
int Xn(int n){
    if(n==0){
        return 1;
    }
    long s = 0;
    for (int i = 1;i<=n;i++){
        s+=pow(i,2)*Xn(n-i);
    }
    return s;
}