#include <iostream>
#include <math.h>
using namespace std;
void in_array(int a[],int n,char c);
void out_array(int a[], int n);
float Median(int a[],int n);
void nearMedian(int a[],int n);
int main(){
    int n;
    cout <<"*Enter the number of elements of the array: ";
    cin >> n;
    int a[n];
    in_array(a,n,'A');
    out_array(a,n);
    cout<<"\nthe average of the array:"<<Median(a,n)<<endl;
    nearMedian(a,n);
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
float Median(int a[],int n){
    int S = 0;
    for(int i = 0;i<n;i++){
        S += a[i];
    }
    return S*1.0/n; 
}
void nearMedian(int a[],int n){
    int min = Median(a,n)-a[0];
    int ar = 0;
    for(int i = 0;i<n;i++){
        int z = Median(a,n)-a[i];
        if(abs(z)<abs(min)){
            min = abs(z);
            ar = i;
        }
    } cout <<"near average of array: A["<<ar<<"]="<<a[ar];
}