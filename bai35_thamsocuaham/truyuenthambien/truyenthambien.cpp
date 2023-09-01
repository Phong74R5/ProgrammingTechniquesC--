#include <iostream>
using namespace std;
void permutation(int &a, int &b){
    int c;
    c = a;
    a = b;
    b = c;
}
int main(){
    int x = 1, y = 2;
    permutation(x,y);
    cout << "x="<<x<<endl<<"y="<<y;
    //x=2,y=1
}