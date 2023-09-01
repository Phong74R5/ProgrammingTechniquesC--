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
int main()
{
    int n;
    cout << "Enter the number of staffs: ";
    cin >> n;
    staff s[n];
    enter_staff_s(s, n);
    out_staff_s(s, n);
}