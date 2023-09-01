#include <iostream>
using namespace std;
struct computer
{
    char ID[20];
    char name[20];
    char supplier[20];
    int price;
    int year;
};
typedef struct computer computer;

void enter_computer(computer &d)
{
    getchar();
    cout << "Enter ID: ";
    gets(d.ID);
    cout << "Enter name: ";
    gets(d.name);
    cout << "Enter Supplier: ";
    gets(d.supplier);
    cout << "Enter price: ";
    cin >> d.price;
    cout << "Enter year of import: ";
    cin >> d.year;
}
void enter_computer_s(computer d[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Computer " << i + 1 << endl;
        enter_computer(d[i]);
        cout << endl;
    }
}
void out_computer(computer d)
{
    cout << "ID: " << d.ID << endl;
    cout << "Name: " << d.name << endl;
    cout << "Supplier: " << d.supplier << endl;
    cout << "price: " << d.price << endl;
    cout << "year of import: " << d.year << endl;
}
void out_computer_s(computer d[], int n)
{
    cout << "list of computers available:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Computer " << i + 1 << endl;
        out_computer(d[i]);
        cout << endl;
    }
}
void out_computer_s_400(computer d[], int n)
{
    bool flag = false;
    cout << "list of computers over $400:\n";
    for (int i = 0; i < n; i++)
    {
        if (d[i].price >= 400)
        {
            cout << "Computer " << i + 1 << endl;
            out_computer(d[i]);
            cout << endl;
            flag = true;
        }
    }
    if (flag == false)
        cout << " No computer over 400$\n";
}
void out_computer_s_liquidation(computer d[], int n)
{
    bool flag = false;
    cout << "liquidation computer list:\n";
    for (int i = 0; i < n; i++)
    {
        if (d[i].year <= 2008)
        {
            cout << "Computer " << i + 1 << endl;
            out_computer(d[i]);
            cout << endl;
            flag = true;
        }
    }
    if (flag == false)
        cout << " No computer due for liquidation\n";
}
int SUM_price(computer d[], int n)
{
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        S += d[i].price;
    }
    return S;
}
int liquidation_price(computer d[], int n)
{
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        if (d[i].year <= 2008)
            S += (d[i].price * 0.3);
    }
    return S;
}
int main()
{
    int n;
    cout << "Enter the number of computers: ";
    cin >> n;
    computer c[n];
    enter_computer_s(c, n);
    out_computer_s(c, n);
    out_computer_s_400(c, n);
    out_computer_s_liquidation(c, n);
    cout << "Total cost to buy computer: " << SUM_price(c, n) << endl;
    cout << "Total liquidation costs: " << liquidation_price(c, n);
}