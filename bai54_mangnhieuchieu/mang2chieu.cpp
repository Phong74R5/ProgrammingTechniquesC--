#include <iostream>
using namespace std;
void out_array2(int ar[2][3]);
int main(){
    int mt1[2][3]={1,2,3,4,5,6};
    int mt2[2][3]={{2,1,4},{4,7,6}};
    cout<<"MATRIX 1:\n";
    out_array2(mt1);
    cout<<"MATRIX 2:\n";
    out_array2(mt2);
}
void out_array2(int ar[2][3]){
    for(int i = 0;i<2;i++){
        for(int j = 0;j<3;j++){
            cout<<ar[i][j]<<"\t";
        }
        cout<<endl;
    }

}