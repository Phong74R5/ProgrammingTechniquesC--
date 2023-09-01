#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter integer: ";
    cin >> n;
    if (n > 0){
        goto ctn;
    }
    cout << "Introduction to programming\n";
    ctn: cout << "Programming c/c++\n";
}