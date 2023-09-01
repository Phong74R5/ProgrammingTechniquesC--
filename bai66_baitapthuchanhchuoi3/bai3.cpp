#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
void delspace(char st[1000], int &n);
int countwords(char st[100], int n);
void strndel(char st[100], int &n, int l, int p);
int main()
{
    char str[80];
    int l, p;
    cout << "Enter string: ";
    gets(str);
    int n = strlen(str);
    delspace(str, n);
    cout << "the number of words in the string: " << countwords(str, n) << endl;
    cout << "Enter the location to delete: ";
    cin >> l;
    cout << "Enter the number of characters to delete: ";
    cin >> p;
    strndel(str, n, l, p);
    delspace(str, n);
    cout << "string after removing the character at position " << l << " with " << p << " characters: ";
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
int countwords(char st[100], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == ' ')
        {
            count++;
        }
    }
    return count + 1;
}
void strndel(char st[100], int &n, int l, int p)
{
    for (int i = l; i < n; ++i)
    {
        st[i] = st[i + p];
    }
    n = n - p;
}
