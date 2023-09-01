#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter integer: ";
    cin >> n;
    switch (n)
    {
        case 1: cout << "Sunday"; break;
        case 2: cout << "Monday"; break;
        case 3: cout << "Tuesday"; break;
        case 4: cout << "Wednesday"; break;
        case 5: cout << "Thusday"; break;
        case 6: cout << "Friday"; break;
        case 7: cout << "Sartusday"; break;
        default: cout << "Not the day of the week"; break;
    }
}