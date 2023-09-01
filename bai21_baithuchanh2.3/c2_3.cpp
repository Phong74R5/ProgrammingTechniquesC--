#include <iostream>
using namespace std;
int main (){
    int h1 , h2 , m1, m2, s1, s2, H, M, S;
    cout << "enter the first hour value: ";
    cin >> h1;
    cout << "enter the first minute value: ";
    cin >> m1;
    cout << "enter the first second value: ";
    cin >> s1;
    cout << "enter the second hour value: ";
    cin >> h2;
    cout << "enter the secord minute value: ";
    cin >> m2;
    cout << "enter the secord second value: ";
    cin >> s2;
    H = h1 + h2;
    M = m1 + m2;
    S = s1 + s2;
    testS:
    if (S >= 60){
        S -= 60;
        M += 1;
        goto testS;
    }
    testM:
    if (M >= 60){
        M -= 60;
        H += 1;
        goto testM;
    }
    cout << "total time is "<< H << ":" << M << ":" << S;
}