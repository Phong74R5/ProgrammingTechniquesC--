#include <iostream>
using namespace std;
int main(){
    int i = 0;
    while (i <= 2){
        int j = 0;
        while (j <= 2){
            cout << "\nHello child";
            j++;
        }
        cout << "\nHello parent";
        i++;
    }
}