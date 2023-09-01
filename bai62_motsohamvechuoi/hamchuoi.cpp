#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char str1[20],str2[20];
    cout << "Enter string 1 :";
    gets(str1);
    cout <<"String 2: ";
    // copy n kí tự của str1 gán cho str2
    strncpy(str2,str1,2);
    puts(str2);
    
    // copy str1 gán cho str2
    strcpy(str2,str1);
    puts(str2);
    cout << "Enter string 2 :";
    gets(str2);
    //nói str2 vào str1
    strcat(str1,str2);
    puts(str1);
    //đếm kí tự của str1
    cout<<strlen(str1);
}