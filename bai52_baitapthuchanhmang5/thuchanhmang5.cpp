#include <iostream>
#include <math.h>
using namespace std;
void in_array(int a[],int n,char c);
void out_array(int a[], int n);
int find_x(int a[],int n,int x);
void insert(int a[],int &n,int x);
int main(){
    int n;
    cout <<"*Enter the number of elements of the array: ";
    cin >> n;
    int a[n];
    in_array(a,n,'A');
    out_array(a,n);
    int x;
    cout <<"Enter integer x:";
    cin >>x;
    cout <<endl<<x<<" appears "<<find_x(a,n,x)<<" times"<<endl;
    if(find_x(a,n,x)==0){
        insert(a,n,x);
        out_array(a,n);
    }
}
void in_array(int a[],int n,char c){
    for(int i= 0;i<n;i++){
        cout <<c<<"["<<i<<"]=";
        cin>>a[i];
        
    }cout<<endl;
}
void out_array(int a[], int n){
    cout<<"\n*The array just entered/create is :\n";
    for(int i = 0;i<n;i++){
        cout <<a[i]<<"\t";
    }
    cout<<endl<<endl;
}
int find_x(int a[],int n,int x){
    int count = 0;
    for(int i = 0;i<n;i++){
        if(a[i]==x){
            count ++;
        }
    }
    return count;
}
void insert(int a[],int &n,int x){
    int ar;
    for(int i =0;i<n;i++){
        if(a[i]>= x) ar = i -1;
    }
    for(int j = n-1;j>=ar;j--){
        a[j+1]=a[j];
    }
    a[ar]=x;
    n++;
}
