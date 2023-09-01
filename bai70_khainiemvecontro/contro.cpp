#include <iostream>
using namespace std;
int main()
{
    int a = 25,x;
    int *y;
    x = 10;
    y =&a;
    *y = x;
    a = *y;
    cout<<&a<<endl;
    cout<<&x<<endl;
    cout<<*y<<endl;
    cout<<y<<endl;
}