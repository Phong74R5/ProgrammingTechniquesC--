#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream myFile1;
    myFile1.open("data.dat", ios::in | ios::binary);
    bool flag1 = myFile1.fail();
    if (flag1 == true)
        cout << "File khong ton tai." << endl;
    else
        cout << "Mo file thanh cong" << endl;
    myFile1.close();
}