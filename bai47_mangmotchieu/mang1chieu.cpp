#include <iostream>
#include <stdlib.h>
using namespace std;
void out_array(int a[],int n){
    for(int i = 0;i<n;i++){
        cout <<"a["<<i<<"]="<<a[i]<<endl;
    }
}
void in_array(int a[],int n){
    for(int i = 0;i<5;i++){
        cout <<"\na["<<i<<"]=";
        cin>>a[i];
    }
}
int main(){
    int a[5];
    in_array(a,5);
    out_array(a,5);
    // int a[5]={4,6,3,8,9};
    // for(int i = 0;i<5;i++){
    //     cout <<"a["<<i<<"]="<<a[i]<<endl;
    // }
    int b[50];
    cout <<"Generate random value[1..50]:\n";
    for(int i = 0;i<50;i++){
        b[i]=rand()%50+1;
    }
    // out_array(b,50);
    for(int i = 0;i<50;i++){
        cout <<"b["<<i<<"]="<<b[i]<<endl;
    }
}

