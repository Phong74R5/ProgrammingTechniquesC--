#include <iostream>
using namespace std;
void in_matrix(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> *(a + (i * n + j));
        }
    }
}
void out_matrix(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << *(a + (i * n + j)) << "\t";
        }
        cout << endl;
    }
}
bool check_Queen(int *a, int n, int vi, int vj)
{
    int x = *(a + (vi * n + vj));

    // ktra dong
    for (int i = 0; i < n; i++)
    {
        if (*(a + (vi * n + i)) > x)
            return false;
    }

    // ktra cot
    for (int j = 0; j < n; j++)
    {
        if (*(a + (j * n + vj)) > x)
            return false;
    }

    // ktra duong cheo thu nhat
    int vi1 = vi + 1;
    int vj1 = vj + 1;
    while (vi1 < n && vj1 < n)
    {
        if (*(a + (vi1 * n + vj1)) > x)
            return false;
        vi1++;
        vj1++;
    }
    vj1 = vj - 1;
    vi1 = vi - 1;
    while (vi1 - 1 >= 0 && vj1 >= 0)
    {
        if (*(a + (vi1 * n + vj1)) > x)
            return false;
        vi1--;
        vj1--;
    }

    // duong cheo thu 2
    vj1 = vj + 1;
    vi1 = vi - 1;
    while (vi1 - 1 >= 0 && vj1 < n)
    {
        if (*(a + (vi1 * n + vj1)) > x)
            return false;
        vj1++;
        vi1--;
    }
    vj1 = vj - 1;
    vi1 = vi + 1;

    while (vj1 - 1 >= 0 && vi1 < n)
    {
        if (*(a + (vi1 * n + vj1)) > x)
            return false;
        vj1--;
        vi1++;
    }
    return true;
}
void out_queen(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (check_Queen(a, n, i, j))
                cout << *(a + (i * n + j)) << "\t";
        }
    }
}
int main()
{
    int *a;
    int n;
    cout << "Enter integer n: ";
    cin >> n;
    a = new int[n * n];
    if (a == NULL)
    {
        cout << "Update error!!";
        exit(0);
    }
    in_matrix(a, n);
    out_matrix(a, n);
    cout << "\nQUEEN: \n";
    out_queen(a, n);
    delete a;
}