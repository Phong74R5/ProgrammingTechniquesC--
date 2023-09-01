#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter integers a, b, c: ";
    cin >> a >> b >> c;
    if (a < b && c < b){
        cout << b << " is the largest number";
    }
    else {
        if(a < c && b < c){
        cout << c << " is the largest number";
    }
    else {
        cout << a << " is the largest number";
    }
    }
}