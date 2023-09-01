/*con trỏ void là loại con trỏ đặc biệt
có thể trỏ đến bất cứ kiểu dữ liệu nào*/
#include<iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int a = 10;
    float f = 11.0;
    int *pa;
    float *pf;
    void *pV;
    pa = &a;
    pf = &f;
    pV = &f;
    cout<<"float PV= "<<*((float*)pV);
    pV = &a;
    cout<<"\nint PV= "<<*((int*)pV);

}