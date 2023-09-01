#include <iostream> 
#include <stdio.h> 
using namespace std;
#define MAX 255

int main(void){
    char str1[MAX]; 
    char *str2;
    cout <<"Enter string str1: "; 
    gets(str1); 
    cout << "Enter string str2: "; 
    str2 = new char[MAX];
    cin.getline(str2,MAX);
    cout<<"String 1: "<<str1<<endl; 
    cout<<"String 2: ";
    puts(str2);
}