#include <iostream>
#include <iomanip>
using namespace std;
#define A 140000
#define B 160000
#define C 180000
#define reduction_rate 6
#define reduction 0.9 // 10%

typedef struct customer
{
    char name[20];
    int rental_days;
    int type;
    int price;
};
void money(customer &d)
{
    int temp;
    if (d.type == 1)
    {
        temp = A;
    }
    else
    {
        if (d.type == 2)
        {
            temp = B;
        }
        else
        {
            temp = C;
        }
    }
    if (d.rental_days >= reduction_rate)
    {
        d.price = d.rental_days * temp * reduction;
    }
    else
    {
        d.price = d.rental_days * temp;
    }
}
void enter_guest(customer &d)
{
    getchar();
    cout << "\nEnter guest name: ";
    gets(d.name);
    cout << "Enter the number of rental days: ";
    cin >> d.rental_days;
    cout << "Enter room type(1, 2, 3): ";
    cin >> d.type;
    money(d);
}
void enter_guest_s(customer d[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nenter guest number " << i + 1 << ":\n";
        enter_guest(d[i]);
        cout << endl;
    }
}
void out_guest_s(customer d[], int n)
{
    cout << "\n+--------+------------------------------+---- ---+------- ---+";
    cout << "\n| rental |             Name             |  TYPE  |   PRICE   |";
    cout << "\n+--------+------------------------------+-- -----+-- --------+";
    for (int i = 0; i < n; i++)
    {
        cout << "\n|" << setw(3) << i + 1 << "     | ";
        cout << setw(28) << d[i].name << " | " << setw(4) << d[i].type << "   |  " << d[i].price << "   |";
        cout << "\n+--------+------------------------------+--------+---- ------+";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "\nEnter the number of guests renting the room: ";
    cin >> n;
    customer g[n];
    enter_guest_s(g, n);
    out_guest_s(g, n);
}