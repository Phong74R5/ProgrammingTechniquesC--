#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char *list[5];
    for (int i = 0; i < 5; i++)
    {
        list[i] = new char[20];
        cout << "name" << i << ":";
        gets(list[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        cout << " " << list[j] << " ";
    }
}