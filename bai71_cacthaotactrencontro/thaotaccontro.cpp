#include <iostream>
using namespace std;
int main()
{
    // gán con trỏ
    int x = 10;
    int *p1, *p2;
    p1 = &x;
    p2 = p1;
    cout << "x=" << x << endl;
    cout << "*p1=" << *p1 << endl;
    cout << "*p2=" << *p2 << endl;
    *p1 = 0;
    cout << "x=" << x << endl;
    cout << "*p2=" << *p2 << endl;
    // hoán vị 2 con trỏ
    int a = 20, b = 16, *pa, *pb, temp;
    pa = &a;
    pb = &b;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}