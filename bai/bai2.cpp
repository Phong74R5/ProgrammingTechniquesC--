#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void interchangesort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}
void sort_even_numbers(int a[], int n)
{
    cout << "\nOutputs even numbers sorted in ascending:\n";
    interchangesort(a, n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] << "\t";
        }
    }
}
int main()
{
    int a[10] = {11, 14, 12, 6, 3, 4, 9, 1, 2, 0};
    sort_even_numbers(a, 10);
}