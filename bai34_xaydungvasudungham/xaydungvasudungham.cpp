#include <iostream>
using namespace std;
int Sum (int a, int b);
int Max (int a, int b);
int main(){
    int x, y;
    cout << "Enter integers x, y: ";
    cin >> x >>y;
    int sum = Sum(x,y);
    int max = Max(x,y);
    cout << "SUM="<<sum<<endl;
    cout << "MAX="<<max;
}
int Sum(int a,int b){
    return a+b;
}
int Max(int a,int b){
    if (a>b){
        return a;
    }
    return b;
}