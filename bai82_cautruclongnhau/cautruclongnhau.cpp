#include <iostream>
using namespace std;
struct birthday
{
    int day;
    int month;
    int year;
};
typedef struct birthday birthday;
struct student
{
    char id[20];
    float gpa;
    birthday birth;
};
typedef struct student student;
void enter(student &st)
{
    cout << "\nEnter student ID: ";
    cin >> st.id;
    cout << "\nEnter GPA: ";
    cin >> st.gpa;
    cout << "\nBirthday:";
    cout << "\nDay: ";
    cin >> st.birth.day;
    cout << "\nMonth: ";
    cin >> st.birth.month;
    cout << "\nYear: ";
    cin >> st.birth.year;
}
void out(student st)
{
    cout << "\nID: " << st.id << endl
         << "GPA: " << st.gpa << endl
         << "Birthday: " << st.birth.day << "/"
         << st.birth.month << "/"
         << st.birth.year << endl;
}
int main()
{
    student st;
    cout<<"Enter student information: ";
    enter(st);
    cout<<"---***---";
    out(st);
}