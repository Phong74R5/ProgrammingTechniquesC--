#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
void check_substring(char *st1, char *st2);
void insert_string(char *st1, char *st2);
int main()
{
    char st1[100], st2[100];
    cout << "\nEnter st1:";
    gets(st1);
    cout << "\nEnter st2:";
    gets(st2);
    check_substring(st1, st2);
    cout<<"\nstring after insert: ";
    insert_string(st1, st2);
}
void check_substring(char *st1, char *st2)
{
    if (strstr(st1, st2))
    {
        cout << "st2 is a substring of st1";
    }
    cout << "st2 isn't a substring of st1";
}
void insert_string(char *st1, char *st2)
{
    char *s;
    st1 = strcat(st1, " ");
    s = strcat(st1, st2);
    puts(s);
}
