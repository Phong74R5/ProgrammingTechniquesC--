#include <iostream>
using namespace std;
int main (){
    int a, b, MAX;
    cout << "Enter integers a, b: ";
    cin >> a >> b;
    if (a > b){
        MAX = a;
    }
    else {
        MAX = b;
    }
    cout << "MAX = " << MAX;
}