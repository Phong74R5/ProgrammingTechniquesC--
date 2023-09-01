#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void in_array(int a[],int n);
void out_array(int a[],int n);
void swap(int &a,int &b);
void sort(int a[],int n);
void spiral(int a[],int b[][50],int n);

int main(){
    srand(time(NULL));
    int n=10;
    int a[n*n];
    in_array(a,n);
    sort(a,n);
    out_array(a,n);
    int b[50][50];
    cout<<"spiral arrangement:\n";
    spiral(a,b,n);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}
void in_array(int a[],int n){
    for(int i = 0;i<n*n;i++){
        a[i]=rand()%41+10;
    }
}
void out_array(int a[],int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<a[i*n+j]<<" ";
        }
        cout<<endl;
    }
}
void swap(int &a,int &b){
    int temp = a;
    a= b;
    b=temp;
}
void sort(int a[],int n){
    for(int i = 0;i<n*n;i++){
        for(int j = i+1;j<n*n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
}
void spiral(int a[],int b[][50],int n){
    int i = 0,j =0,k=0,l=0;
    while(i<n*n){
        for(j=l;j<n-l;j++){
            b[l][j]=a[i++];
        }
        for(k=l+1;k<n-l;k++){
            b[k][n-l-1]=a[i++];
        }
        for(j=n-l-2;j>=l;j--){
            b[n-l-1][j]=a[i++];
        }
        for(k=n-l-2;k>l;k--){
            b[k][l]=a[i++];
        }
        l++;
    }
}