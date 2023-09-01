#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter integer n: ";
    cin >> n;
    cout <<"\n* Square:\n";
    for (int i = 0; i<n;i++){
        for (int j = 0;j<n;j++){
            cout <<"*  ";
        }
        cout << endl;
    }
    cout << "\n*First triangle:\n";
    for (int i = 0;i<n;i++){
        for(int j =0;j<n-i;j++){
            cout <<"* ";
        }
        cout << endl;
    }
    cout << "\n*Second triangle:\n";
    for (int i = 0;i<n;i++){
        for(int j =0;j<i+1;j++){
            cout <<"* ";
        }
        cout << endl;
    }
    cout << "\n*Isosceles triangle:\n";
    for (int i = 0;i<n;i++){
        for(int j = 0;j<n-i;j++){
            cout <<" ";
        }
        for(int j = 0;j<2*i+1;j++){
            cout <<"*";
        }
        cout <<endl;
    }
}