#include <iostream>
using namespace std;
struct staff
{
    char ID[20];
    char name[20];
    char addr[100];
    int managers;
};
typedef struct staff staff;
void enter_staff(staff &d)
{
    getchar();
    cout << "Enter ID: ";
    gets(d.ID);
    cout << "Enter name: ";
    gets(d.name);
    cout << "Enter address: ";
    gets(d.addr);
    cout << "Managers: ";
    cin >> d.managers;
}
void enter_staff_s(staff d[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "STAFF " << i + 1 << endl;
        enter_staff(d[i]);
        cout << endl;
    }
}
void out_staff(staff d)
{
    cout << "ID: " << d.ID << endl
         << "Name: " << d.name << endl
         << "Address: " << d.addr << endl
         << (d.managers ? "MANAGER!!" : "STAFF!!");
}
void out_staff_s(staff d[], int n)
{
    cout << "*********************************\n";
    for (int i = 0; i < n; i++)
    {
        cout << "STAFF " << i + 1 << endl;
        out_staff(d[i]);
        cout << "\n-----------------------" << endl;
    }
    cout << "*********************************\n";
}
void del_staffs(staff d[], int &n)
{
    int i = 0;
    while (i < n)
    {
        if (d[i].managers == 0)
        {
            for (int j = i; j < n - 1; j++)
            {
                d[j] = d[j + 1];
            }
            // sau khi xoa giam so luong phan tu mang
            n--;
            i--;
        }
        i++;
    }
}
int main()
{
    int n;
    cout << "Enter the number of staffs: ";
    cin >> n;
    staff s[n];
    enter_staff_s(s, n);
    out_staff_s(s, n);
    del_staffs(s, n);
    cout << "\nAfter delete staff:\n";
    out_staff_s(s, n);
}