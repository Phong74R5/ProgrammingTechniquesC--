#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
void instr(char *st);
void outstr(char *st);
void del(char *st1, int p);
void delchr(char *st);
void insertchr(char *st1, int p, char ch);
void insertdot(char *st1);

int SearchStr(char *st, char *x){
    if(strstr(st,x)==NULL){
        return -1;
    }
    char *c = st;
    
}
int main()
{
    char st[1000000];
    instr(st);
    outstr(st);
    delchr(st);
    outstr(st);
    insertdot(st);
    outstr(st);
}
void instr(char *st)
{

    cout << "Enter string: ";
    gets(st);
}
void outstr(char *st)
{
    cout << "String just entered: ";
    puts(st);
}
void del(char *st1, int p)
{
    int n = strlen(st1);
    for (int j = p; j < n; j++)
    {
        st1[j] = st1[j + 1];
    }
}
void delchr(char *st)
{

    for (int i = 0; i < strlen(st); i++)
    {
        if (isalpha(st[i]))
        {
            del(st, i);
            i--;
        }
    }
}
void insertchr(char *st1, int p, char ch)
{
    for (int i = strlen(st1); i >= p; i--)
    {
        st1[i] = st1[i - 1];
    }
    st1[p] = ch;
}
void insertdot(char *st1)
{
    for (int i = strlen(st1); i > 0; i -= 3)
    {
        insertchr(st1, i, '.');
    }
    st1[strlen(st1) - 1] = '\0';
}
