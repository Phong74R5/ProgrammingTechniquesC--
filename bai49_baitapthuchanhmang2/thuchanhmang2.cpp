#include <iostream>
using namespace std;
void in_array(int a[],int &n,char c);
void out_array(int a[], int n);
void two_alternating_arrays(int a[],int b[],int c[],int n);
int main(){
    int a[20], b[20],c[40], n;
    cout <<"*Enter the number of elements of the array: ";
    cin >> n;
    in_array(a,n,'A');
    out_array(a,n);
    in_array(b,n,'B');
    out_array(b,n);
    two_alternating_arrays(a,b,c,n);
    cout<<"\n==>Two_alternating_arrays:";
    out_array(c,2*n);
}
void in_array(int a[],int &n,char c){
    
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
void two_alternating_arrays(int a[],int b[],int c[],int n){
    int nc = 0;
    for(int i=0;i<n;i++){
        c[nc++]=a[i];
        c[nc++]=b[i];
    }
}