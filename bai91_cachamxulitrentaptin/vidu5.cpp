#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream f("myFile1.txt", ios::in);
    char a[80];
    while (!f.eof())
    {
        f.getline(a, 80);
        cout << a << endl;
    }
    f.close();
}