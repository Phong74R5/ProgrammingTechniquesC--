#include <iostream>
using namespace std;
int main (){
    int a,b,c,d,MAX1,MAX2,MIN1,MIN2,MAX,MIN;
    cout << "Enter 4 integers a, b, c, d: ";
    cin >> a >> b >> c >> d;
    (a > b) ? (MAX1 = a) + (MIN1 = b) : (MAX1 = b) + (MIN1 = a);
    (c > d) ? (MAX2 = c) + (MIN2 = d) : (MAX2 = d) + (MIN2 = c);
    (MAX1 > MAX2) ? (MAX = MAX1):(MAX = MAX2);
    (MIN1 < MIN2) ? (MIN = MIN1):(MIN= MIN2);
    cout << "MAX = " << MAX << endl;
    cout << "MIN = " << MIN << endl;
    return 0;
}