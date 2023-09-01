#include <iostream>
using namespace std;
int main(){
    int n, passWord;
    cout << "Enter integer n: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Enter Password: ";
        cin >> passWord;
        if (passWord == 1){
            cout << "Done!!";
            break;
        }
        cout << "Password is incorrect!!\n";
    }
}