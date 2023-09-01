#include <iostream>
using namespace std;
void inarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nA[" << i << "]=";
        cin >> *(a + i);
    }
}
void outarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << *(a + i);
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sortup(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(a + i) > *(a + j))
            {
                swap((a + i), (a + j));
            }
        }
    }
}
void sortdown(int *a, int n, int countodd)
{
    for (int i = countodd; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(a + i) < *(a + j))
            {
                swap((a + i), (a + j));
            }
        }
    }
}
void sortmain(int *a, int n)
{
    int countodd = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(a + i) % 2 == 0)
            {
                swap((a + i), (a + j));
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (*(a + i) % 2 != 0)
        {
            countodd++;
        }
    }
    sortup(a, countodd);
    sortdown(a, n, countodd);
}
int main(){
    int *a, n;
    cout << "Enter n: ";
    cin >> n;
    a = new int[n];
    inarray(a, n);
    cout<<"\n Array before sort: ";
    outarray(a, n);
    cout<<"\n Array after sort: ";
    sortmain(a,n);
    outarray(a, n);
    delete a;
}