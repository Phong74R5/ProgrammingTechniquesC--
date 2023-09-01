#include <iostream>
using namespace std;
int GCD(int a, int b);
int LCM(int a, int b);
int main (){
    int m, n, GCD;
    cout << "Enter 2 integers m, n: ";
    cin >> m >> n;
    cout << "Least common multiple: " << LCM(m,n);
}
int GCD(int a, int b){
    while (a != 0 && b != 0){
        if(a > b){
            a -= b;
        }
        else{
            b -= a;
        }
    }
    if (a == 0){
        return b;
    }
    else{
        return a;
    }
}
int LCM(int a, int b){
    return (a*b)/GCD(a,b);
}