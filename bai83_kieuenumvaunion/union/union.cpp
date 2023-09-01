#include <iostream>
using namespace std;
union Sohoc{
    char c;
    int i;
    float f;
}so;
int main()
{
    so.c = 'C';
    so.i = 1;
    so.f = 1.5;
    // so.c = 'C';
    cout<<"so c: "<<so.c<<endl;
    // so.i = 1;
    cout<<"so i: "<<so.i<<endl;
    // so.f = 1.5;
    cout<<"so f: "<<so.f<<endl;
}