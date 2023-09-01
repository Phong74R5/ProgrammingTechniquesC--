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
int maxinline(int a[][20],int m,int &i){
        int j,max=a[i][0];
    for(j=0;j<m;j++){
        if(a[i][j]>max){
            max=a[i][j];
        }
    }  
    return max;
}
int minincol(int a[][20],int n,int &j){
        int i,min=a[0][j];
    for(i=0;i<n;i++){
        if(a[i][j]<min){
            min=a[i][j];
        }
    }  
    return min;
}
void out_array(int a[][20],int n,int m){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++)
        {
        cout<<" "<<a[i][j];
    }cout<<endl;
    }
}
int main(){
    int a[20][20];
    int n,m,i,j;
    cout <<"Enter column: ";
    cin >>n;
    cout <<"Enter rows: ";
    cin >>m;
    in_array(a,n,m);
    out_array(a,n,m);
    cout<<"elements with max in row and min in column:\n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if((a[i][j]==maxinline(a,m,i))&&(a[i][j]==minincol(a,n,j))){
                cout<<"A["<<i<<"]["<<j<<"]="<<a[i][j];
            }
        }
    }
    cout<<endl;
}
