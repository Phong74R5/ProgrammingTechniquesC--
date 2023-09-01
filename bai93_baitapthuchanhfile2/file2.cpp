#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    fstream f, f1;
    char a[100];
    char content[100];
    f1.open("data1.txt", ios::out);
    while (true)
    {
        cout << "Enter search string: ";
        gets(a);
        if (a[0] == '0' && strlen(a) == 1)
        {
            break;
        }
        f.open("data.txt", ios::in);
        bool flag = false;
        while (!f.eof())
        {
            f.getline(content, 100);
            if (strstr(content, a))
            {
                cout << "Found string \"" << a << "\" in file" << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << "Could not find string \"" << a << "\" in file" << endl;
            f1 << a << "\n";
        }
        f.close();
    }
    f1.close();
}
