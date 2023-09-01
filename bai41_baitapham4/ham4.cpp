#include <iostream>
#include <math.h>
using namespace std;
bool square_number(int n){
    if((int(sqrt(n))) == sqrt(n)){
        return true;
    }
    else{
        return false;
    }
}
int SUM_square_number(int n){
    int S = 0;
    for(int i = 1; i<= n;i++){
        if(square_number(i)){
            S += i;
        }
    }
    return S;
}
int main(){
    int n;
    do{
        cout <<"Enter integer n: ";
        cin >> n;
        if(square_number(n)){
            cout <<n<<" is a square number."<<endl;
        }
        else{
            cout <<n<<" isn't a square number."<<endl;
        }
        cout <<"SUM of square numbers: "<<SUM_square_number(n)<<endl;
    }while(n!=0);
}
