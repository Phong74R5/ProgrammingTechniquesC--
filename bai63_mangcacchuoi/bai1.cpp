#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char list[5][20];
    for (int i = 0; i < 5; i++)
    {
        cout << "name" << i << ":";
        cin >> list[i];
    }
    for (int j = 0; j < 5; j++)
    {
        cout << " " << list[j];
    }
}