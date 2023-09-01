// /*
// Nhom: chieu thu 2
// Ma Sinh Vien: 3122560013
// Ten Sinh Vien: Nguyen Thanh Dien
// */
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
void taoMang(int a[]);
void nhapdung(int &a);
void capnhapGT(int a[], int &sum, double &avg);
void xuat(int a[], int sum, double avg);
void timMINMAX(int a[], int &max, int &min);
double phuongsai(int a[], int songay);
double tinhPI(double);
int main()
{
    cout << "Nhom: C2 "
         << "\t "
         << "Ma sinh vien : 3122560013 "
         << "\t\t"
         << "Ten sinh vien : Nguyen Thanh Dien "
         << "\n";
    // bai 1
    double n;
    cout << "\nnhap n: ";
    cin >> n;
    double pi = tinhPI(1 / n);
    cout << "\ngia tri cua PI la: " << pi << endl;
    // bai 2
    int a[7], max, min, sum;
    double avg;
    taoMang(a);
    capnhapGT(a, sum, avg);
    timMINMAX(a, max, min);
    cout << "\nPHUONG SAI = " << phuongsai(a, 7) << fixed << setprecision(1);
}
void taoMang(int a[7])
{
    for (int i = 0; i < 7; i++)
    {
        a[i] = 0;
    }
}
void nhapdung(int &a)
{
    if (a < 0)
    {
        do
        {
            cout << "Nhap lai: ";
            cin >> a;
        } while (a < 0);
    }
}
void capnhapGT(int a[], int &sum, double &avg)
{
    int count = 1;
    for (int i = 0; i < 7; i++)
    {
        if (i == 6)
        {
            cout << "\nNhap so ca ngay chu nhat: ";
            cin >> a[i];
            nhapdung(a[i]);
        }
        else
        {
            cout << "\nNhap so ca ngay thu " << i + 2 << ": ";
            cin >> a[i];
            nhapdung(a[i]);
        }
        sum = 0;
        for (int i = 0; i < 7; i++)
        {
            sum += a[i];
        }

        avg = sum / count;
        count++;
        xuat(a, sum, avg);
    }
}
void xuat(int a[], int sum, double avg)
{
    cout << "Tong\tTB\tThu 2\tThu 3\tThu 4\tThu 5\tThu 6\tThu 7\tChu nhat\n";
    cout << sum << "\t" << avg << fixed << setprecision(1) << "\t";
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << "\t";
    }
}
void timMINMAX(int a[], int &max, int &min)
{
    max = a[0];
    min = a[0];
    for (int i = 0; i < 7; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
    }
    cout << "\n So ca nhiem cao nhat trong tuan: " << max << endl;
    cout << "\n So ca nhiem thap nhat trong tuan: " << min << endl;
}
double phuongsai(int a[], int songay)
{
    double S = 0;
    for (int i = 0; i < songay; i++)
    {
        S += a[i];
    }
    double A = S / songay;
    double PS = 0;
    for (int i = 0; i < songay; i++)
    {
        PS += pow((a[i] - A), 2);
    }
    PS /= songay - 1;
    return PS;
}
double tinhPI(double c)
{
    float S = 0;
    float e = 1; // sai so e = 1/(2n + 1)
    int n = 0;
    while (e > c)
    {
        e = (float)1 / (2 * n + 1);
        if (n % 2 == 0)
            S = S + e;
        else
            S = S - e;
        n++;
    }
    return 4 * S;
}