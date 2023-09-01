#include <iostream>
using namespace std;
void in_array(int a[][20],int n,int m){
   for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
        cout<<"a["<<i<<"]["<<j<<"]=";
        cin >>a[i][j];
    }
   } 
}
void out_array(int a[][20],int n,int m){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++)
        {
        cout<<" "<<a[i][j];
    }cout<<endl;
    }
}
void build_array_1(int a[][20],int b[],int n,int m){
    for(int i = 0;i<n;i++){
        int S = 0;
        for(int j = 0;j<n;j++){
            S += a[i][j];
        }
        b[i]=S;
    }
    cout<<"array B is the sum over the lines:\n";
    for(int i = 0;i<n;i++){
        cout<<" "<<b[i];
    }
} 
void min_max(int b[],int n){
    int max=0;
    int min=0;

    for(int i = 0;i<n;i++){
        if(b[i]>b[max]){
            max=i;
        }
        if(b[i]<b[min]){
            min = i;
        }
    }
    cout<<"\nThe line with the largest sum is  line"<<max+1<<" :MAX="<<b[max]<<endl;
    cout<<"The line with the smallest sum is "<<min+1<<" line: MIN="<<b[min]<<endl;
}
int main(){
    int a[20][20];
    int n,m;
    cout <<"Enter column: ";
    cin >>n;
    cout <<"Enter rows: ";
    cin >>m;
    int b[n];
    in_array(a,n,m);
    out_array(a,n,m);
    build_array_1(a,b,n,m);
    min_max(b,n);
}