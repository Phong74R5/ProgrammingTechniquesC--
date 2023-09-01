#include <iostream>
using namespace std;
int main(){
    for(int i = 0; i <= 100/5; i++){
        for (int j = 0; j <= 100/3;j++){
            if(5*i+3*j+(100-i-j)/3==100&&(100-i-j)%3==0){
                cout <<"buffalo is standing :"<<i<<endl
                <<"buffalo is lying: "<<j<<endl
                <<"old Buffalo: "<<100-i-j<<endl;
            }
        }
    }
}