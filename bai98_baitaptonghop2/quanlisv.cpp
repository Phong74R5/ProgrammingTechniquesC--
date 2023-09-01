#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <iomanip>
#include <string.h>
using namespace std;
struct student
{
    char id[20];
    char name[20];
    char id_class[20];
    char major[20];
    int year;
};
typedef struct student student;

struct classroom
{
    char id[20];
    char name[20];
};
typedef struct classroom classroom;
struct object
{
    char id[20];
    char name[20];
    int theory;
    int practice;
};
typedef struct object object;
void enter_class(classroom d[])
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    fstream f;
    f.open("class.txt", ios::out | ios::app);
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        cout << "ID class: ";
        gets(d[i].id);
        f << d[i].id << endl;
        fflush(stdin);
        cout << "Name class: ";
        gets(d[i].name);
        f << d[i].name << endl;
    }
    f.close();
}
void exp_list_class(classroom d[100], int n)
{
    cout << "List class:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << d[i].id << "\t" << d[i].name << endl;
    }
}
void exp_class()
{
    fstream f;
    f.open("class.txt", ios::in);
    char content[100];
    int flag = 1;
    while (!f.eof())
    {
        f.getline(content, 100);
        if (flag % 2 == 0)
        {
            cout << content << endl;
        }
        else
        {
            cout << content << "\t";
        }
        flag++;
    }
    f.close();
}
void update_class()
{
    // lưu vào bộ nhớ tạm
    classroom ds[100];
    char content[20];
    fstream f;
    f.open("class.txt", ios::in);
    int count = 0;
    int flag = 1;
    while (!f.eof())
    {
        f.getline(content, 20);
        if (flag % 2 != 0)
        {
            strcpy(ds[count].id, content);
        }
        else
        {
            strcpy(ds[count].name, content);
        }
        if (flag % 2 == 0)
        {
            count++;
        }
        flag++;
    }
    f.close();
    exp_list_class(ds, count);
    // thao tác cập nhật tên lớp
    char new_class[100];
    char old_class[100];
    cout << "Enter class name to update:";
    fflush(stdin);
    gets(old_class);
    cout << "Enter new class name: ";
    fflush(stdin);
    gets(new_class);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(ds[i].name, old_class) == 0)
        {
            strcpy(ds[i].name, new_class);
        };
    }
    // lưu vào file
    f.open("class.txt", ios::out);
    for (int i = 0; i < count; i++)
    {
        f << ds[i].id << endl
          << ds[i].name << endl;
    }
    f.close();
}
void del_class()
{
    // lưu vào bộ nhớ tạm
    classroom ds[100];
    char content[20];
    fstream f;
    f.open("class.txt", ios::in);
    int count = 0;
    int flag = 1;
    while (!f.eof())
    {
        f.getline(content, 20);
        if (flag % 2 != 0)
        {
            strcpy(ds[count].id, content);
        }
        else
        {
            strcpy(ds[count].name, content);
        }
        if (flag % 2 == 0)
        {
            count++;
        }
        flag++;
    }
    f.close();
    exp_list_class(ds, count);
    // thao tác xóa tên lớp
    char del_cls[100];
    cout << "Enter class name to delete:";
    fflush(stdin);
    gets(del_cls);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(ds[i].name, del_cls) == 0)
        {
            for (int j = i; j < count; j++)
            {
                for (int k = j + 1; k < count; k++)
                {
                    strcpy(ds[j].name, ds[k].name);
                    strcpy(ds[j].id, ds[k].id);
                }
            }
            count--;
        }
    }
    // lưu vào file
    f.open("class.txt", ios::out);
    for (int i = 0; i < count; i++)
    {
        f << ds[i].id << endl
          << ds[i].name << endl;
    }
    f.close();
}

void enter_stu(student d[])
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    fstream f;
    f.open("students.txt", ios::out | ios::app);
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        cout << "ID: ";
        gets(d[i].id);
        f << d[i].id << endl;
        fflush(stdin);
        cout << "Name: ";
        gets(d[i].name);
        f << d[i].name << endl;
        cout << "ID_class: ";
        gets(d[i].id_class);
        f << d[i].id_class << endl;
        cout << "Major: ";
        gets(d[i].major);
        f << d[i].major << endl;
        cout << "Year: ";
        cin >> d[i].year;
        f << d[i].year << endl;
    }
    f.close();
}
void exp_list_stu(student d[100], int n)
{
    cout << "List students:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << d[i].id << "\t" << d[i].name << "\t" << d[i].id_class << "\t" << d[i].major << "\t" << d[i].year << endl;
    }
}
void exp_stu()
{
    fstream f;
    f.open("students.txt", ios::in);
    char content[100];
    int flag = 1;
    while (!f.eof())
    {
        f.getline(content, 100);
        if (flag % 5 == 0)
        {
            cout << content << endl;
        }
        else
        {
            cout << content << "\t";
        }
        flag++;
    }
    f.close();
}
void update_stu()
{
    // lưu vào bộ nhớ tạm
    student ds[100];
    char content[20];
    fstream f;
    f.open("students.txt", ios::in);
    int count = 0;
    int flag = 1;
    while (!f.eof())
    {
        f.getline(content, 20);
        if (flag == 1)
        {
            strcpy(ds[count].id, content);
        }
        if (flag == 2)
        {
            strcpy(ds[count].name, content);
        }
        if (flag == 3)
        {
            strcpy(ds[count].id_class, content);
        }
        if (flag == 4)
        {
            strcpy(ds[count].major, content);
        }
        if (flag == 5)
        {

            ds[count].year = atoi(content);
            flag = 1;
            count++;
            continue;
        }
        flag++;
    }
    f.close();
    exp_list_stu(ds, count);
    // thao tác cập nhật tên lớp
    student update;
    cout << "Enter ID student to update:";
    fflush(stdin);
    gets(update.id);
    cout << "Name: ";
    fflush(stdin);
    gets(update.name);
    cout << "ID_class: ";
    fflush(stdin);
    gets(update.id_class);
    cout << "Major: ";
    gets(update.major);
    cout << "Year: ";
    cin >> update.year;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(ds[i].id, update.id) == 0)
        {
            ds[i] = update;
        }
    }
    // lưu vào file
    f.open("students.txt", ios::out);
    for (int i = 0; i < count; i++)
    {
        f << ds[i].id << endl
          << ds[i].name << endl
          << ds[i].id_class << endl
          << ds[i].major << endl
          << ds[i].year << endl;
    }
    f.close();
}
void del_stu()
{
    // lưu vào bộ nhớ tạm
    student ds[100];
    char content[20];
    fstream f;
    f.open("students.txt", ios::in);
    int count = 0;
    int flag = 1;
    while (!f.eof())
    {
        f.getline(content, 20);
        if (flag == 1)
        {
            strcpy(ds[count].id, content);
        }
        if (flag == 2)
        {
            strcpy(ds[count].name, content);
        }
        if (flag == 3)
        {
            strcpy(ds[count].id_class, content);
        }
        if (flag == 4)
        {
            strcpy(ds[count].major, content);
        }
        if (flag == 5)
        {

            ds[count].year = atoi(content);
            flag = 1;
            count++;
            continue;
        }
        flag++;
    }
    f.close();
    exp_list_stu(ds, count);
    // thao tác xóa tên lớp
    char del_stu[100];
    cout << "Enter ID student to delete:";
    fflush(stdin);
    gets(del_stu);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(ds[i].id, del_stu) == 0)
        {
            for (int j = i; j < count; j++)
            {
                for (int k = j + 1; k < count; k++)
                {
                    ds[j] = ds[k];
                }
            }
            count--;
        }
    }
    // lưu vào file
    f.open("students.txt", ios::out);
    for (int i = 0; i < count; i++)
    {
        f << ds[i].id << endl
          << ds[i].name << endl
          << ds[i].id_class << endl
          << ds[i].major << endl
          << ds[i].year << endl;
    }
    f.close();
}
void enter_obj(object d[])
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    fstream f;
    f.open("objects.txt", ios::out | ios::app);
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        cout << "ID: ";
        gets(d[i].id);
        f << d[i].id << endl;
        fflush(stdin);
        cout << "Name: ";
        gets(d[i].name);
        f << d[i].name << endl;
        cout << "Theory: ";
        cin >> d[i].theory;
        f << d[i].theory << endl;
        cout << "Practice: ";
        cin >> d[i].practice;
        f << d[i].practice << endl;
    }
    f.close();
}
void exp_list_obj(object d[100], int n)
{
    cout << "List object:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << d[i].id << "\t" << d[i].name << "\t" << d[i].theory << "\t" << d[i].practice << endl;
    }
}
void exp_obj()
{
    fstream f;
    f.open("objects.txt", ios::in);
    char content[100];
    int flag = 1;
    while (!f.eof())
    {
        f.getline(content, 100);
        if (flag % 4 == 0)
        {
            cout << content << endl;
        }
        else
        {
            cout << content << "\t";
        }
        flag++;
    }
    f.close();
}
void update_obj()
{
    // lưu vào bộ nhớ tạm
    object ds[100];
    char content[20];
    fstream f;
    f.open("objects.txt", ios::in);
    int count = 0;
    int flag = 1;
    while (!f.eof())
    {
        f.getline(content, 20);
        if (flag == 1)
        {
            strcpy(ds[count].id, content);
        }
        if (flag == 2)
        {
            strcpy(ds[count].name, content);
        }
        if (flag == 3)
        {
            ds[count].theory = atoi(content);
        }
        if (flag == 5)
        {

            ds[count].practice = atoi(content);
            flag = 1;
            count++;
            continue;
        }
        flag++;
    }
    f.close();
    exp_list_obj(ds, count);
    // thao tác cập nhật tên lớp
    object update;
    fflush(stdin);
    cout << "Enter ID object to update:";
    gets(update.id);
    fflush(stdin);
    cout << "Name: ";
    gets(update.name);
    cout << "Theory: ";
    cin >> update.theory;
    cout << "Practice: ";
    cin >> update.practice;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(ds[i].id, update.id) == 0)
        {
            ds[i] = update;
        }
    }
    // lưu vào file
    f.open("objects.txt", ios::out);
    for (int i = 0; i < count; i++)
    {
        f << ds[i].id << endl
          << ds[i].name << endl
          << ds[i].theory << endl
          << ds[i].practice << endl;
    }
    f.close();
}
void del_obj()
{
    // lưu vào bộ nhớ tạm
    object ds[100];
    char content[20];
    fstream f;
    f.open("objects.txt", ios::in);
    int count = 0;
    int flag = 1;
    while (!f.eof())
    {
        f.getline(content, 20);
        if (flag == 1)
        {
            strcpy(ds[count].id, content);
        }
        if (flag == 2)
        {
            strcpy(ds[count].name, content);
        }
        if (flag == 3)
        {
            ds[count].theory = atoi(content);
        }
        if (flag == 5)
        {

            ds[count].practice = atoi(content);
            flag = 1;
            count++;
            continue;
        }
        flag++;
    }
    f.close();
    exp_list_obj(ds, count);
    // thao tác xóa tên lớp
    char del_obj[100];
    fflush(stdin);
    cout << "Enter ID student to delete:";
    gets(del_obj);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(ds[i].id, del_obj) == 0)
        {
            for (int j = i; j < count; j++)
            {
                for (int k = j + 1; k < count; k++)
                {
                    ds[j] = ds[k];
                }
            }
            count--;
        }
    }
    // lưu vào file
    f.open("objects.txt", ios::out);
    for (int i = 0; i < count; i++)
    {
        f << ds[i].id << endl
          << ds[i].name << endl
          << ds[i].theory << endl
          << ds[i].practice << endl;
    }
    f.close();
}

void menu()
{
    cout << "CHUONG TRINH QUAN LY SINH VIEN C/C++\n";
    cout << "*************************MENU**************************\n";
    cout << "**  1. Quan ly sinh vien                             **\n";
    cout << "**  2. Quan ly mon hoc                               **\n";
    cout << "**  3. Quan ly lop hoc                               **\n";
    cout << "**  0. Thoat                                         **\n";
    cout << "*******************************************************\n";
    cout << "Nhap tuy chon: ";
}
void menu_sv()
{
    cout << "*************************MENU**************************\n";
    cout << "**  1. Them sinh vien                                **\n";
    cout << "**  2. Xoa sinh vien                                 **\n";
    cout << "**  3. Cap nhat sinh vien                            **\n";
    cout << "**  4. Xem danh sach                                 **\n";
    cout << "**  0. Thoat                                         **\n";
    cout << "*******************************************************\n";
    cout << "Nhap tuy chon: ";
}

void menu_monhoc()
{
    cout << "*************************MENU**************************\n";
    cout << "**  1. Them mon hoc                                  **\n";
    cout << "**  2. Xoa mon hoc                                   **\n";
    cout << "**  3. Cap nhat mon hoc                              **\n";
    cout << "**  4. Xem danh sach                                 **\n";
    cout << "**  0. Thoat                                         **\n";
    cout << "*******************************************************\n";
    cout << "Nhap tuy chon: ";
}
void menu_lophoc()
{
    cout << "*************************MENU**************************\n";
    cout << "**  1. Them lop hoc                                  **\n";
    cout << "**  2. Xoa lop hoc                                   **\n";
    cout << "**  3. Cap nhat lop hoc                              **\n";
    cout << "**  4. Xem danh sach                                 **\n";
    cout << "**  0. Thoat                                         **\n";
    cout << "*******************************************************\n";
    cout << "Nhap tuy chon: ";
}

int main()
{
    int key;
    menu();
    while (1)
    {
        cin >> key;
        if (key == 0)
        {
            cout << "Thank you!!";
            exit(0);
        }
        else
        {
            switch (key)
            {
            case 1:
            {
                int key1;
                menu_sv();
                while (1)
                {
                    cin >> key1;
                    if (key1 == 0)
                    {
                        menu();
                        break;
                    }
                    else
                    {
                        switch (key1)
                        {
                        case 1:
                        {
                            student l[100];
                            cout << "**\n  1. Them sinh vien                                **\n";
                            enter_stu(l);
                            menu_sv();
                        }
                        break;
                        case 2:
                        {
                            cout << "**\n  2. Xoa sinh vien                                 **\n";
                            del_stu();
                            menu_sv();
                        }
                        break;
                        case 3:
                        {
                            cout << "\n**  3. Cap nhat sinh vien                            **\n";
                            update_stu();
                            menu_sv();
                        }
                        break;
                        case 4:
                        {
                            cout << "\n**  4. Xem danh sach                                 **\n";
                            cout << "ID"
                                 << "\t"
                                 << "Name"
                                 << "\t"
                                 << "class"
                                 << "\t"
                                 << "Major"
                                 << "\t"
                                 << "Year" << endl;
                            exp_stu();
                            menu_sv();
                        }
                        break;
                        }
                    }
                }
            }
            break;
            case 2:
            {
                int key2;
                menu_monhoc();
                while (1)
                {
                    cin >> key2;
                    if (key2 == 0)
                    {
                        menu();
                        break;
                    }
                    else
                    {
                        switch (key2)
                        {
                        case 1:
                        {
                            object l[100];
                            cout << "**\n  1. Them mon hoc                                 **\n";
                            enter_obj(l);
                            menu_monhoc();
                        }
                        break;
                        case 2:
                        {
                            cout << "**\n  2. Xoa mon hoc                                  **\n";
                            del_obj();
                            menu_monhoc();
                        }
                        break;
                        case 3:
                        {
                            cout << "\n**  3. Cap nhat mon hoc                             **\n";
                            update_obj();
                            menu_monhoc();
                        }
                        break;
                        case 4:
                        {
                            cout << "\n**  4. Xem danh sach                                 **\n";
                            cout << "ID"
                                 << "\t"
                                 << "Name"
                                 << "\t"
                                 << "Theory"
                                 << "\t"
                                 << "Practice" << endl;
                            exp_obj();
                            menu_monhoc();
                        }
                        break;
                        }
                    }
                }
            }
            break;
            case 3:
            {
                int key3;
                menu_lophoc();
                while (1)
                {
                    cin >> key3;
                    if (key3 == 0)
                    {
                        menu();
                        break;
                    }
                    else
                    {
                        switch (key3)
                        {
                        case 1:
                        {
                            classroom l[100];
                            cout << "**\n  1. Them lop hoc                                  **\n";
                            enter_class(l);
                            menu_lophoc();
                        }
                        break;
                        case 2:
                        {
                            cout << "**\n  2. Xoa lop hoc                                   **\n";
                            del_class();
                            menu_lophoc();
                        }
                        break;
                        case 3:
                        {
                            cout << "\n**  3. Cap nhat lop hoc                              **\n";
                            update_class();
                            menu_lophoc();
                        }
                        break;
                        case 4:
                        {
                            cout << "\n**  4. Xem danh sach                                 **\n";
                            cout << "ID"
                                 << "\t"
                                 << "Name" << endl;
                            exp_class();
                            menu_lophoc();
                        }
                        break;
                        }
                    }
                }
            }
            break;
            default:
                menu();
            }
        }
    }
}