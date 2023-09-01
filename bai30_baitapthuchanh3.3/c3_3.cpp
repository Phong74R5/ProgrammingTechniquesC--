#include <iostream>
using namespace std;
int main (){
    int m, n, GCD;
    cout << "Enter 2 integers m, n: ";
    cin >> m >> n;
    int Multi = m*n;
    while (n != 0 && m != 0){
        if(n > m){
            n -= m;
        }
        else{
            m -= n;
        }
    }
    if (n == 0){
        GCD = m;
    }
    else{
        GCD = n;
    }
    cout << "Least common multiple: " << Multi/GCD;
}