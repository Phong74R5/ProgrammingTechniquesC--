#include <iostream>
using namespace std;
int SUM(int,int);
int main(){
    int x,y,sum;
    cout <<"Enter integers x,y: ";
    cin >>x>>y;
    sum = SUM(x,y);
    cout <<"sum="<<sum;
}
int SUM(int a,int b){
    exit(0);//thoát chương trình
    return a+b;
}