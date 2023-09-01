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
int evenMAX(int *a, int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) % 2 == 0)
        {
            max = *(a + i);
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) % 2 == 0 && *(a + i) > max)
        {
            max = *(a + i);
        }
    }
    return max;
}
int oddMIN(int *a, int n)
{
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) % 2 != 0)
        {
            min = *(a + i);
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) % 2 != 0 && *(a + i) < min)
        {
            min = *(a + i);
        }
    }
    return min;
}
int main()
{
    int *a, n;
    cout << "Enter n: ";
    cin >> n;
    a = new int[n];
    inarray(a, n);
    cout<<"\nArray: ";
    outarray(a, n);
    if (evenMAX(a, n) == 0)
    {
        cout << "\nArrays without even numbers" << endl;
    }
    else
    {
        cout << "\nLargest even number: " << evenMAX(a, n) << endl;
    }
    if (oddMIN(a, n) == 0)
    {
        cout << "\nArrays without even numbers" << endl;
    }
    else
    {
        cout << "\nSmallest odd number: " << oddMIN(a, n) << endl;
    }
    delete a;
}