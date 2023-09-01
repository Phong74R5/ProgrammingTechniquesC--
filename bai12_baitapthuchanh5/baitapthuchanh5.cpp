#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Import multiplication table to print: ";
    cin >> number;
    for (int i = 1; i <= 10; i++){
        cout << number << "x" << i << "=" << number * i << endl;
    }
}