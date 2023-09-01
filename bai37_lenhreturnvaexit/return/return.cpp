#include <iostream>
using namespace std;
int MAX(int,int);
int main(){
    int x,y,max;
    cout <<"Enter integers x,y: ";
    cin >>x>>y;
    max = MAX(x,y);
    cout <<"MAX="<<max;
}
int MAX(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}