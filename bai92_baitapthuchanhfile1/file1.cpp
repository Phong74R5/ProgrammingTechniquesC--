#include <iostream>
#include <fstream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sort(int *a, int n)
{
    for (int i = 0; i < n * n - 1; i++)
    {
        for (int j = i + 1; j < n * n; j++)
        {
            if (a[i] < a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}
void out_matrix(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << *(a + i * n + j) << "\t";
        }
        cout << endl;
    }
}
int main()
{
    fstream f("matrix.txt", ios::in);
    if (!f.is_open())
    {
        cout << "Open file fail";
        return 0;
    }
    else
    {
        int *a, n;
        f >> n;
        a = new int[n * n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                f >> *(a + i * n + j);
            }
        }
        out_matrix(a, n);
        sort(a, n);
        cout << "\nSORT:\n";
        out_matrix(a, n);
        fstream f1("matrix.txt", ios::out);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                f1 << *(a + i * n + j) << " ";
            }
            f1 << "\n";
        }
        f1.close();
        delete a;
    }
    f.close();
    
}