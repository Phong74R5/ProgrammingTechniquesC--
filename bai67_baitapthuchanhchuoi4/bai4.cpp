#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
bool symmetrycheck(char *st, int n);
int main()
{
    char str[100];
    cout << "Enter string: ";
    gets(str);
    int l = strlen(str);

    if (symmetrycheck(str, l))
    {
        cout << "This string is symmetric";
    }
    else
    {
        cout << "This string isn't symmetric";
    }
}
bool symmetrycheck(char *st, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (st[i] != st[n - i - 1])
        {
            return false;
        }
    }
    return true;
}