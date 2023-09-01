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
void findMAX(int a[][20],int n,int m){
    int M = a[0][0];
    int col=0,rows=0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++)
        {
        if (a[i][j]>M){
            M = a[i][j];
            col=i;rows=j;
        }
    }
    }cout <<"MAX: a["<<col<<"]["<<rows<<"]="<<M<<endl;
}
int symmetrycheck(int a[][20],int n,int m){
     for(int i = 1;i<n-1;i++){
        for(int j = m;j<n-1;j--)
            {
            if (a[i][j]!=a[j][i]){
                return 0;
            }
    }
    }return 1;
}
int main(){
    int a[20][20];
    int n,m;
    cout <<"Enter column: ";
    cin >>n;
    cout <<"Enter rows: ";
    cin >>m;
    in_array(a,n,m);
    out_array(a,n,m);
    findMAX(a,n,m);
    if(symmetrycheck(a,n,m)==1){
        cout<<"symmetric matrix"<<endl;
    }
    else{
        cout<<"asymmetric matrix"<<endl;
    }
}