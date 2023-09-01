#include <iostream>
using namespace std;
int main()
{
    enum MyColor
    {
        black,
        blue,
        green,
        cyan,
        red,
        purple,
        yellow,
        white
    };
    MyColor mycolor1;
    mycolor1 = MyColor(2);
    if (mycolor1 == green)
    {
        mycolor1 = red;
    }
    cout << mycolor1;
}