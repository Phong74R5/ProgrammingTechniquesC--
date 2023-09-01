#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
int countlower(char st[100], int n);
int countupper(char st[100], int n);
int countalpha(char st[100], int n);
int main()
{
    char st[100];
    cout << "Enter string: ";
    gets(st);
    int n = strlen(st);
    cout << "\nnumber of lowercase characters: " << countlower(st, n) << endl
         << "number of uppercase characters: " << countupper(st, n) << endl
         << "number of characters that are not letters: " << countalpha(st, n) << endl;
}
int countlower(char st[100], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (islower(st[i]))
        {
            count++;
        }
    }
    return count;
}
int countupper(char st[100], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isupper(st[i]))
        {
            count++;
        }
    }
    return count;
}
int countalpha(char st[100], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isalpha(st[i]) == 0)
        {
            count++;
        }
    }
    return count;
}