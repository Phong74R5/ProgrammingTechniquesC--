#include <iostream>
using namespace std;
#define MaxR 50
#define MaxC 50
void in_array2(int ar[MaxR][MaxC],int &a,int&b){
    cout <<"Enter the number of rows: ";
    cin >> a;
    cout <<"Enter the number of columns: ";
    cin >>b;
    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++){
            cout<<"array["<<i<<"]["<<j<<"]=";
            cin >>ar[i][j];
        }
    }
    cout <<endl;
}
void out_array2(int ar[MaxR][MaxC],int a,int b){
    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++){
            cout<<ar[i][j]<<"\t";
        }
        cout<<endl;
    }

}
int main(){
    int A[MaxR][MaxC];
    int a,b;
    in_array2(A,a,b);
    cout <<"two-dimensional array just imported:\n";
    out_array2(A,a,b);
}