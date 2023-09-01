#include <iostream>
using namespace std;
int a = 10, b = 5;
const float Pi = 3.14;
int Cong(){
    int kq = a + b;
    return kq;
}
int main(){
    cout<<Cong()<<endl;
    /* Pi = 10 
    Không thể gán giá trị khác cho Pi*/
    cout<<Pi;
}