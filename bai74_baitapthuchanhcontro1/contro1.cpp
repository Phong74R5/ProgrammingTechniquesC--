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
int countMAX(int *a, int n)
{
    int max = 1;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (*(a + i) == *(a + j))
            {
                count++;
            }
        }
        if (max < count)
        {
            max = count;
        }
    }
    return max;
}
int countele(int *a, int n, int index)
{
    int count = 0;
    for (int i = index; i < n; i++)
        if (*(a + i) == *(a + index))
            count++;
    return count;
}
void list(int *a, int n)
{
    if (countMAX(a, n) > 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (countele(a, n, i) == countMAX(a, n))
                cout << "\nthe most appearing element is: " << *(a + i);
        }
    }
    else
        cout << "\nthe number of times every element appears is 1 ";
}
int main()
{
    int *a, n;
    cout << "Enter n: ";
    cin >> n;
    a = new int[n];
    inarray(a, n);
    outarray(a, n);
    list(a, n);
    delete a;
}