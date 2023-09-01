#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream f;
    char a[100] = "XIN CHAO CAC BAN";
    f.open("data.txt", ios::out);
    f << a;
    f.close();
}