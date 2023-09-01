#include <iostream>
using namespace std;
int main (){
    
    int y;
    cout << "Check leap year!!\n";
    cout << "Enter year to check: ";
    cin >> y;
    (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) ? cout << y <<" is a leap year" : cout << y <<" isn't a leap year";
}