#include <iostream>
#include <iomanip>
using namespace std;
struct student
{
    char name[20];
    float gpa;
    int rank;
};
typedef struct student student;
void enter_stu(student &d)
{
    getchar();
    cout << "Enter name: ";
    gets(d.name);
    cout << "Enter GPA: ";
    cin >> d.gpa;
}
void enter_stu_s(student d[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        enter_stu(d[i]);
    }
}
void sortrank(student d[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (d[i].gpa < d[j].gpa)
            {
                student temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    }
    d[0].rank = 1;
    int maxrank = 1;
    float maxpoint = d[0].gpa;
    for (int k = 1; k < n; k++)
    {
        if (d[k].gpa == maxpoint)
        {
            d[k].rank = maxrank;
        }
        else
        {
            maxrank += 1;
            maxpoint = d[k].gpa;
            d[k].rank = maxrank;
        }
    }
}
void out_stu_s(student d[], int n)
{
    sortrank(d, n);
    cout << "\n+-----+------------------------------+-------+----------+";
    cout << "\n| num |             Name             |  GPA  |   Rank   |";
    cout << "\n+-----+------------------------------+-------+----------+";
    for (int i = 0; i < n; i++)
    {
        cout << "\n|" << setw(3) << i + 1 << "  | ";
        cout << setw(28) << d[i].name << " | " << setw(4) << d[i].gpa << "  |    " << d[i].rank << "     |";
        cout << "\n+-----+------------------------------+-------+----------+";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    student sts[n];
    enter_stu_s(sts, n);
    out_stu_s(sts, n);
}