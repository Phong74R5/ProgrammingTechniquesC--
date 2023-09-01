#include <iostream>
#include <math.h>
using namespace std;
int main (){
    float a, b, c, delta;
    cout << "Enter the coefficients a, b, c: ";
    cin >> a >> b >> c;
    if (a == 0){
        cout << "x = " << -c/b;
    }
    else {
        delta = pow(b, 2) - 4 * a * c;
        if (delta == 0){
            cout << "x = " << -b / (2 * a);
        }
        else {
            if (delta > 0){
                cout << "x1 = " << (- b - sqrt(delta)) / (2 * a) << endl << "x2 = " << (- b + sqrt(delta)) / (2 * a);
            }
            else {
                cout << "no solution";
            }
        }
    }
}