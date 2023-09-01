#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int *p = new int;
    if (p == NULL)
    {
        cout << "Update error!!";
        exit(0);
    }
    *p = 100;
    cout << "In the memory cell " << p
         << " has the value: " << *p << endl;
    // Tránh hao tổn bộ nhớ
    if (p != NULL)
    {
        delete p;
        p = NULL;
    }
}
