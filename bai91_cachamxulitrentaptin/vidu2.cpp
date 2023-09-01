#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    char a = 'a', b;
    file.open("data.dat", ios::out | ios::binary); // Mo file co san da ghi
    cout << "Ghi vao file \n";
    file.write(&a, sizeof(a)); // ghi du lieu tu mang vao file
    file.close();
    file.open("data.dat", ios::in | ios::binary); // Mo file de doc
    cout << "Doc du lieu vao bo nho\n";
    file.read(&b, sizeof(b)); // Doc noi dung file vao mang
    cout << b << "";
    file.close();
}