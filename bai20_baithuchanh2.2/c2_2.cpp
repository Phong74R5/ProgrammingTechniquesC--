#include <iostream>
using namespace std;
int main (){
    int a, b, c;
    cout << "Enter the lengths of 3 sides a, b, c :";
    cin >> a >> b >> c;
    if ((a>0)&&(b>0)&&(c>0)&&(a-b<c)&&(a-c<b)&&(b-c<a)){
        if ((a==b)&&(b==c))
        {
            cout << "equilateral triangle";
        }
        else{
            if ((a==b)||(a==c)||(c==b)){
                cout << "isosceles triangle";
            }
            else {
                if (( a * a+b * b==c * c) || (a*a+c*c==b*b)|| ( b  * b+c * c==a * a)){
                    cout << "right angle";
                }
                else {
                    if (( a * a+b * b==c * c && a==b) || (a*a+c*c==b*b && a ==c)|| ( b  * b+c * c==a * a && b==c))
                    cout << "Triangle right angle";
                }
            }
        }
    }
    else{
        cout << "not a triangle";
    }
}