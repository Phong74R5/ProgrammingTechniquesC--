#include <iostream>
using namespace std;
void in_array(int a[],int &n,char c);
void out_array(int a[], int n);
void del(int a[],int &n, int d);
void duplicate_test(int a[], int &n);
int main(){
    int n;
    cout <<"*Enter the number of elements of the array: ";
    cin >> n;
    int a[n];
    in_array(a,n,'A');
    out_array(a,n);
    duplicate_test(a,n);
    out_array(a,n);
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
void duplicate_test(int a[],int &n){
    for(int i = 0;i< n;i++){
        for(int j = i+1;j<n;j++){
            if(a[i]==a[j]){
                del(a,n,j);
            }
        }
    }
}
void del(int a[],int &n, int d){
    for(int i = d;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
}