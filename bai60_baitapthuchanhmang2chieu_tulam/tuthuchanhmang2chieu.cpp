#include <iostream>
#include <math.h>
using namespace std;
void menu();
void in_matrix(int a[][20], int n, int m);
void out_matrix(int a[][20], int n, int m);
int sum_matrix(int a[][20], int n, int m);
void list7(int a[][20], int n, int m);
int sum_round(int a[][20], int m, int n);
int sum_tri_up(int a[][20], int n, int m);
int addr_col_axm_max(int a[][20], int n, int m);
int addr_row_perfect_square(int a[][20], int n, int m);
void check_sort(int a[][20], int n, int m);
void permute_matrix(int a[][20], int b[][20], int n, int m);
bool check_perfect_number(int a)
{
    int S = 0;
    if (a == 1)
    {
        return false;
    }
    for (int i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            S += i;
            int temp = a / i;
            if (temp != i && temp != a)
            {
                S += temp;
            }
        }
    }
    if (S == a)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n, m;
    int a[20][20];
    cout << "enter the number of rows: ";
    cin >> n;
    cout << "enter the number of columns: ";
    cin >> m;
    in_matrix(a, n, m);
    out_matrix(a, n, m);
    menu();
    bool flag = true;
    do
    {
        int x;
        cout << "select function:";
        cin >> x;
        switch (x)
        {
        case 1:
        {
            cout << "1. Sum of elements:" << sum_matrix(a, n, m) << endl;
        }
        break;
        case 2:
        {
            list7(a, n, m);
        }
        break;
        case 3:
        {
            cout << "3. The sum of the elements lying on the matrix contour: " << sum_round(a, n, m) << endl;
        }
        break;
        case 4:
        {
            cout << "4. The sum of the elements in the upper triangular part of the matrix: " << sum_tri_up(a, n, m) << endl;
        }
        break;
        case 5:
        {
            cout << "5. The column with the largest product: " << addr_col_axm_max(a, n, m) << endl;
        }
        break;
        case 6:
        {
            int c = addr_row_perfect_square(a, n, m);
            if (c == -1)
            {
                cout << "6. The line with the most perfect square: NOTHING!!!" << endl;
            }
            else
                cout << "6. The line with the most perfect square: " << addr_row_perfect_square(a, n, m) << endl;
        }
        break;
        case 7:
        {
            cout << "7. The rows are sorted:\n";
            check_sort(a, n, m);
        }
        break;
        case 8:
        {
            cout << "8. Permute " << n << " X " << m << " to " << m << " X " << n << ":" << endl;
            int p[20][20];
            permute_matrix(a, p, n, m);
            out_matrix(p, m, n);
        }
        break;
        case 0:
            flag = false;
            break;
        }
    } while (flag == true);
    cout << "\n---------------Thank's for using this program---------------\n";
}
void menu()
{
    cout << "**********list of functions*********" << endl
         << "1. Sum of elements." << endl
         << "2. List the elements that are divisible by 7." << endl
         << "3. Find the sum of the elements lying on the matrix contour." << endl
         << "4. Find the sum of the elements in the upper triangular part of the matrix." << endl
         << "5. Find the column with the largest product" << endl
         << "6. Find the line with the most perfect square.." << endl
         << "7. Find sorted rows." << endl
         << "8. Permute n X m to m X n." << endl
         << "0. EXIT!!" << endl;
}
void in_matrix(int a[][20], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nRow number " << i << endl;
        for (int j = 0; j < m; j++)
        {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
    }
}
void out_matrix(int a[][20], int n, int m)
{
    cout << "\nThe matrix you just entered/created is:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
int sum_matrix(int a[][20], int n, int m)
{
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            S += a[i][j];
        }
    }
    return S;
}
void list7(int a[][20], int n, int m)
{
    cout << "2. List the elements that are divisible by 7:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] % 7 == 0)
            {
                cout << a[i][j] << "\t";
            }
        }
    }
    cout << endl;
}
int sum_round(int a[][20], int n, int m)
{
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
            {
                S += a[i][j];
            }
        }
    }
    return S;
}
int sum_tri_up(int a[][20], int n, int m)
{
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                for (int k = j + 1; k < m; k++)
                {
                    S += a[i][k];
                }
                break;
            }
        }
    }
    return S;
}
int addr_col_axm_max(int a[][20], int n, int m)
{
    int b[m];
    for (int j = 0; j < m; j++)
    {
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            count *= a[i][j];
        }
        b[j] = count;
    }
    int MAX = b[0];
    int ad = 0;
    for (int i = 0; i < n; i++)
    {
        if (MAX < b[i])
        {
            MAX = b[i];
            ad = i;
        }
    }
    return ad;
}
int addr_row_perfect_square(int a[][20], int n, int m)
{
    int add = 0;
    int b[n] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (check_perfect_number(a[i][j]))
            {
                b[i] += 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (b[j] > b[i])
            {
                add = j;
            }
        }
    }
    if (b[add] != 0)
        return add;
    else
        return -1;
}
void check_sort(int a[][20], int n, int m)
{
    int up[n][m];
    int down[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            up[i][j] = a[i][j];
            down[i][j] = a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = j + 1; k < m; k++)
            {
                if (up[i][j] > up[i][k])
                {
                    int temp = up[i][j];
                    up[i][j] = up[i][k];
                    up[i][k] = temp;
                }
                if (down[i][j] < down[i][k])
                {
                    int temp = down[i][j];
                    down[i][j] = down[i][k];
                    down[i][k] = temp;
                }
            }
        }
    }
    int adup[n] = {0};
    int addown[n] = {0};
    for (int i = 0; i < n; i++)
    {
        int count1 = 0;
        int count2 = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == up[i][j])
            {
                count1++;
            }
            if (a[i][j] == down[i][j])
            {
                count2++;
            }
        }
        if (count1 == m)
        {
            adup[i] = 1;
        }

        if (count2 == m)
        {
            addown[i] = 1;
        }
    }
    cout << "rows are sorted ascending:";
    bool flag1 = true;
    for (int i = 0; i < n; i++)
    {
        if (adup[i])
        {
            cout << i << "\t";
            flag1 = false;
        }
    }
    if (flag1)
    {
        cout << " Nothing ";
    }
    cout << endl;
    cout << "rows are sorted descending:";
    bool flag2 = true;
    for (int i = 0; i < n; i++)
    {
        if (addown[i])
        {
            cout << i << "\t";
            flag2 = false;
        }
    }
    if (flag2)
    {
        cout << " Nothing ";
    }
    cout << endl;
}
void permute_matrix(int a[][20], int b[][20], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[j][i] = a[i][j];
        }
    }
}