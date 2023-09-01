#include <iostream>
using namespace std;
double S(int x, int n);
int main(){
    int x;
    int n;
    cout <<"Enter integers x, n: ";
    cin >>x>>n;
    cout<<x<<"^"<<n<<"="<<S(x,n);
}
double S(int x,int n){
    if(n ==0){
        return 1;
    }
    else{
        if(n == 1){
            return x;
        }
        else{
            if(n<0){
                return S(x,n+1)*1.0/x;
            }
            return S(x,n-1)*x;
        }
    }
}