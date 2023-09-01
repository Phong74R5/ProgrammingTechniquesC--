#include <iostream>
using namespace std;
float expression1(int n);
float expression2(int n);
float expression3(int n);
float expression4(int n);
int main(){
    int n;
    cout << "Enter integer n: ";
    cin >> n;
    cout <<"\nExpression 1: "<<expression1(n)<<endl;
    cout <<"\nExpression 2: "<<expression2(n)<<endl;
    cout <<"\nExpression 3: "<<expression3(n)<<endl;
    cout <<"\nExpression 4: "<<expression4(n)<<endl;

}
float expression1(int n){
    float S = 0;
    for(int i = 1; i <= n; i++){
        S += i;
    }
    return S;
}
float expression2(int n){
    float S = 0;
    for(int i = 1; i<= n; i++){
        if(i%2!=0){
            S+=i;
        }
    }
    return S;
}
float expression3(int n){
    float S = 0;
    for (int i = 1;i<=n;i++){
        S+=1.0/i;
    }
    return S;
}
float expression4(int n){
    float S = 0;
    for(int i = 1; i<= n; i++){
        if(i%2==0){
            S+=-1.0/i;
        }
        else{
            S+=1.0/i;
        }
    }
    return S;
}
