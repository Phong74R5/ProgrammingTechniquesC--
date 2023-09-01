#include <iostream>
#include <iomanip>
using namespace std;
struct student
{
    char ID[20];
    char name[20];
    char addr[50];
    float math;
    float physics;
    float chemistry;
    float AVG;
};
typedef struct student student;
void enter_stu(student &d);
void out_stu_s(student d[], int n);
void out_stu(student &d);
void AVG_stu(student &d);
void enter_stu_s(student d[], int n);

void enter_stu(student &d)
{
    cout << "Enter ID: ";
    getchar();
    gets(d.ID);
    cout << "Enter name: ";
    gets(d.name);
    cout << "Enter address: ";
    gets(d.addr);
    cout << "Enter math score: ";
    cin >> d.math;
    cout << "Enter physics score: ";
    cin >> d.physics;
    cout << "Enter chemistry score: ";
    cin >> d.chemistry;
    cout << endl;
    AVG_stu(d);
}
void AVG_stu(student &d)
{
    d.AVG = ((d.math + d.physics + d.chemistry) / 3.0);
}
void enter_stu_s(student d[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        enter_stu(d[i]);
    }
}
void out_stu(student &d)
{
    cout << "ID: " << d.ID << endl
         << "Name: " << d.name << endl
         << "Address: " << d.addr << endl
         << "Math: " << d.math << endl
         << "Physics: " << d.physics << endl
         << "Chemistry: " << d.chemistry << endl
         << "==>AVG: " << d.AVG << endl;
}
void out_stu_s(student d[], int n)
{
    cout << "\t\tSTUDENT LIST\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\t\t******\n";
        out_stu(d[i]);
        cout << "\t\t******\n";
    }
}
int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    student stus[n];
    enter_stu_s(stus, n);
    out_stu_s(stus, n);
}