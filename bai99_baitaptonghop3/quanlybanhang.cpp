#include <iostream>
#include <stdlib.h>

#ifdef _WIN32
#define WINPAUSE system("pause")
#endif
#include <fstream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct goods
{
    char id[20];
    char name[20];
    int total;
    float unit_price;
};
typedef struct goods goods;

struct bill
{
    char time[10];
    char id[20];
    char name_cus[20];
    int buy;
    char id_buy[20];
    float pay;
};
typedef struct bill bill;
void enter_goods(goods d[])
{
    int n;
    cout << "n: ";
    cin >> n;
    fstream f;
    f.open("goods.txt", ios::out | ios::app);
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        cout << "ID: ";
        gets(d[i].id);
        f << d[i].id << endl;
        fflush(stdin);
        cout << ("Name: ");
        gets(d[i].name);
        f << d[i].name << endl;
        cout << "Total: ";
        cin >> d[i].total;
        f << d[i].total << endl;
        cout << "Unit price: ";
        cin >> d[i].unit_price;
        f << d[i].unit_price << endl;
    }
    f.close();
}
void exp_goods()
{
    fstream f;
    f.open("goods.txt", ios::in);
    int flag = 1;
    char content[100];
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
void exp_list_goods(goods d[], int n)
{
    cout << "\nID\tName\tTotal\tUnit price\n";
    for (int i = 0; i < n; i++)
    {
        cout << d[i].id << "\t" << d[i].name << "\t" << d[i].total << "\t" << d[i].unit_price << endl;
    }
    cout << endl;
}
void update_goods()
{
    goods d[100];
    char content[100];
    int flag = 1, count = 0;
    fstream f;
    f.open("goods.txt", ios::in);
    while (!f.eof())
    {
        f.getline(content, 100);
        if (flag == 1)
        {
            strcpy(d[count].id, content);
        }
        if (flag == 2)
        {
            strcpy(d[count].name, content);
        }
        if (flag == 3)
        {
            d[count].total = atoi(content);
        }
        if (flag == 4)
        {
            d[count].unit_price = atof(content);
            flag = 1;
            count++;
            continue;
        }
        flag += 1;
    }
    f.close();
    exp_list_goods(d, count);
    char checkid[20];
    fflush(stdin);
    cout << "Check id to up: ";
    gets(checkid);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(d[i].id, checkid) == 0)
        {
            cout << "UPDATE!!\n";
            fflush(stdin);
            cout << "Name: ";
            gets(d[i].name);
            cout << "Total: ";
            cin >> d[i].total;
            cout << "Unit price: ";
            cin >> d[i].unit_price;
            break;
        }
    }
    f.close();
    f.open("goods.txt", ios::out);
    for (int i = 0; i < count; i++)
    {
        f << d[i].id << endl
          << d[i].name << endl
          << d[i].total << endl
          << d[i].unit_price << endl;
    }
    f.close();
}
void del_goods()
{
    goods d[100];
    char content[100];
    int flag = 1, count = 0;
    fstream f;
    f.open("goods.txt", ios::in);
    while (!f.eof())
    {
        f.getline(content, 100);
        if (flag == 1)
        {
            strcpy(d[count].id, content);
        }
        if (flag == 2)
        {
            strcpy(d[count].name, content);
        }
        if (flag == 3)
        {
            d[count].total = atoi(content);
        }
        if (flag == 4)
        {
            d[count].unit_price = atof(content);
            flag = 1;
            count++;
            continue;
        }
        flag += 1;
    }
    f.close();
    exp_list_goods(d, count);
    char checkid[20];
    fflush(stdin);
    cout << "Check id to up: ";
    gets(checkid);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(d[i].id, checkid) == 0)
        {
            for (int j = i; j < count; j++)
            {
                for (int k = j + 1; k < count; k++)
                {
                    d[j] = d[k];
                }
                count--;
                break;
            }
            break;
        }
    }
    f.close();
    f.open("goods.txt", ios::out);
    for (int i = 0; i < count; i++)
    {
        f << d[i].id << endl
          << d[i].name << endl
          << d[i].total << endl
          << d[i].unit_price << endl;
    }
    f.close();
}

int check_id(char id[20], goods g[100], int count)
{
    for (int i = 0; i < count; i++)
    {
        if (strcmp(g[i].id, id) == 0)
        {
            return i;
        }
    }
    return -1;
}
void enter_bill(bill d[])
{

    goods g[100];
    char content[100];
    int flag = 1, count = 0;
    fstream f;
    f.open("goods.txt", ios::in);
    while (!f.eof())
    {
        f.getline(content, 100);
        if (flag == 1)
        {
            strcpy(g[count].id, content);
        }
        if (flag == 2)
        {
            strcpy(g[count].name, content);
        }
        if (flag == 3)
        {
            g[count].total = atoi(content);
        }
        if (flag == 4)
        {
            g[count].unit_price = atof(content);
            flag = 1;
            count++;
            continue;
        }
        flag += 1;
    }
    f.close();
    exp_list_goods(g, count);

    int n;
    cout << "n: ";
    cin >> n;
    f.open("bill.txt", ios::out | ios::app);
    for (int i = 0; i < n; i++)
    {
        cout << "\nCustom " << i + 1 << ":" << endl;
        fflush(stdin);
        cout << "Time: ";
        gets(d[i].time);
        f << d[i].time << endl;
        fflush(stdin);
        cout << "ID: ";
        gets(d[i].id);
        f << d[i].id << endl;
        fflush(stdin);
        cout << "Customer: ";
        gets(d[i].name_cus);
        f << d[i].name_cus << endl;
        fflush(stdin);
        cout << "the number of items the customer purchased: ";
        cin >> d[i].buy;
        f << d[i].buy << endl;
        d[i].pay = 0;
        for (int k = 0; k < d[i].buy; k++)
        {
            cout << "Item " << k + 1 << ":" << endl;
            fflush(stdin);
            do
            {
                cout << "Enter the item code you want to buy: ";
                gets(d[i].id_buy);
            } while (check_id(d[i].id_buy, g, count) == -1);
            f << d[i].id_buy << endl;
            d[i].pay += g[check_id(d[i].id_buy, g, count)].unit_price;
        }
        f << d[i].pay << endl;
    }
    f.close();
}
void exp_bill()
{
    int n;
    fstream f;
    f.open("bill.txt", ios::in);
    char content[100];
    int flag = 1;
    while (!f.eof())
    {
        f.getline(content, 100);
        if (flag < 3)
        {
            cout << content << "\t";
        }
        if (flag == 3)
        {
            cout << content << "\t\t";
        }
        if (flag == 4)
        {
            n = atoi(content);
        }
        if (flag == 5 + n)
        {
            flag = 1;
            cout << content << endl;
            continue;
        }
        flag++;
    }
    f.close();
    cout << endl;
}
void detail(char n[20])
{
    goods g[100];
    char content[100];
    int flag = 1, count = 0;
    fstream f;
    f.open("goods.txt", ios::in);
    while (!f.eof())
    {
        f.getline(content, 100);
        if (flag == 1)
        {
            strcpy(g[count].id, content);
        }
        if (flag == 2)
        {
            strcpy(g[count].name, content);
        }
        if (flag == 3)
        {
            g[count].total = atoi(content);
        }
        if (flag == 4)
        {
            g[count].unit_price = atof(content);
            flag = 1;
            count++;
            continue;
        }
        flag += 1;
    }
    f.close();
    for (int i = 0; i < count; i++)
    {
        if (strcmp(n, g[i].id) == 0)
        {
            cout << g[i].name;
        }
    }
}
void detail_bill()
{
    int n;
    fstream f;
    f.open("bill.txt", ios::in);
    char content[100];
    int flag = 1;
    while (!f.eof())
    {
        f.getline(content, 100);
        if (flag < 3)
        {
            cout << content << "\t";
        }
        if (flag == 3)
        {
            cout << content << "\t\t";
        }
        if (flag == 4)
        {
            n = atoi(content);
        }
        if (flag > 4 && flag < 4 + n)
        {
            char i[20];
            strcpy(i, content);
            detail(i);
            cout << ", ";
        }
        if (flag == 4 + n)
        {
            char i[20];
            strcpy(i, content);
            detail(i);
            cout << ".";
        }

        if (flag == 5 + n)
        {
            flag = 1;

            cout << endl;
            continue;
        }
        flag++;
    }
}
void menu()
{
    cout << "\n*************************MENU**************************\n";
    cout << "**  1. Item management                               **\n";
    cout << "**  2. Invoice Management                            **\n";
    cout << "**  0. exit                                          **\n";
    cout << "*******************************************************\n";
    cout << "Enter options: ";
}
void menu_item()
{
    cout << "\n*************************MENU**************************\n";
    cout << "**  1. Item update                                   **\n";
    cout << "**  2. import item                                   **\n";
    cout << "**  3. Delete item                                   **\n";
    cout << "**  4. See item list                                 **\n";
    cout << "**  0. exit                                          **\n";
    cout << "*******************************************************\n";
    cout << "Enter options: ";
}
void menu_bill()
{
    cout << "\n*************************MENU**************************\n";
    cout << "**  1. Add bill                                      **\n";
    cout << "**  2. See bill details                              **\n";
    cout << "**  3. See bill list                                 **\n";
    cout << "**  0. exit                                          **\n";
    cout << "*******************************************************\n";
    cout << "Enter options: ";
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
                menu_item();
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
                            cout << "\n**  1. Item update                                   **\n";
                            update_goods();
                            menu_item();
                        }
                        break;
                        case 2:
                        {
                            goods d[100];
                            cout << "\n**  2. import item                                   **\n";
                            enter_goods(d);
                            menu_item();
                        }
                        break;
                        case 3:
                        {
                            cout << "\n**  3. Delete item                                   **\n";
                            del_goods();
                            menu_item();
                        }
                        break;
                        case 4:
                        {
                            cout << "\nID\tName\tTotal\tUnit price\n";
                            exp_goods();
                            menu_item();
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
                menu_bill();
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
                            bill d[100];
                            cout << "\n**  1. Add bill                                      **\n";
                            enter_bill(d);
                            menu_bill();
                        }
                        break;
                        case 2:
                        {
                            cout << "\n**  2. See bill details                              **\n";
                            cout << "Time"
                                 << "\t\t"
                                 << "ID"
                                 << "\t"
                                 << "Customer"
                                 << "\t"
                                 << "Items" << endl;
                            detail_bill();
                            menu_bill();
                        }
                        break;
                        case 3:
                        {
                            cout << "\n**  3. See bill list                                 **\n";
                            cout << "Time"
                                 << "\t\t"
                                 << "ID"
                                 << "\t"
                                 << "Customer"
                                 << "\t"
                                 << "Pay" << endl;
                            exp_bill();
                            menu_bill();
                        }
                        break;
                        }
                    }
                }
            }
            break;
            }
        }
    }
    getchar();
}