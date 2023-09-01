#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    file.open("data.dat", ios::out | ios::binary); // Mo file co san da ghi
    cout << "Ghi vao file \n";
    file.write(reinterpret_cast<char *>(a), sizeof(a)); // ghi du lieu tu mang vao file
    file.close();
    file.open("data.dat", ios::in | ios::binary); // Mo file de doc
    int b[10];
    cout << "Doc du lieu vao bo nho\n";
    file.read(reinterpret_cast<char *>(b), sizeof(b)); // Doc noi dung file vao mang
    for (int i = 0; i < 10; i++)
    {
        cout << b[i] << "\t";
    }
    cout << endl;
    file.close();
}