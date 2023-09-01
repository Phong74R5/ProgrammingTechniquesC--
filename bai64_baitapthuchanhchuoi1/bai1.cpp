#include <iostream>
#include <string.h>
using namespace std;
int countspace(char st[1000], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == ' ')
        {
            count++;
        }
    }
    return count;
}
void delspace(char st[1000], int &n);
int main()
{
    char str[1000];
    cout << "Enter string: ";
    gets(str);
    int n = strlen(str);
    cout << "there are " << countspace(str, n) << " spaces in the string";
    delspace(str, n);
    cout << "\nstring after removing spaces: ";
    puts(str);
}
void delspace(char st[1000], int &n)
{
    int i;
    while (st[0] == ' ')
    {
        strcpy(st, st + 1);
    }
    n = strlen(st);
    while (st[n - 1] == ' ')
    {
        strcpy(st + n - 1, st + n);
        n--;
    }
    i = 0;
    while (st[i] != '\0')
    {
        if (st[i] == ' ')
        {
            if (st[i + 1] == ' ')
            {
                strcpy(st + i, st + i + 1);
                i--;
                n--;
            }
            else
            {
                i++;
            }
        }
        i++;
    }
}