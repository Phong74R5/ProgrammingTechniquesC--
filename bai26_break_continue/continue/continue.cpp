#include <iostream>
using namespace std;
int main (){
    int n, sum = 0;
    do{
        cout << "Enter integer n: ";
        cin >> n;
        if (n < 0){
            continue;
        }
        sum += n;
    }
    while (n != 0);
    cout << "SUM = " << sum << endl;
}