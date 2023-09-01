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
int SUMplus(int a[][20],int n,int m){
    int S = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(a[i][j]>0){
                S += a[i][j];
            }
        }
    }
    return S;
}
int columncheck(int a[][20],int n,int m){
    int col = 0;
    for(int i = 0;i<n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(a[i][j]<a[i][j+1]){
                count ++;
            }
        }if(count = m-1){
            col++;
        }
    }
    return col;
}
int main(){
    int a[20][20],n, m;
    cout <<"Enter column: ";
    cin >>n;
    cout <<"Enter rows: ";
    cin >>m;
    in_array(a,n,m);
    out_array(a,n,m);
    cout<<"sum of positive integers: "<<SUMplus(a,n,m)<<endl;
    cout<<"number of columns increasing from left to right:"<<columncheck(a,n,m)<<endl;
}