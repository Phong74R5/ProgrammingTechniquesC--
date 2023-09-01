#include <iostream>
#include <math.h>
using namespace std;
void menu();
void in_array(int a[], int &n);
void out_array(int a[], int n);
int count_negative(int a[], int n);
int MAX(int a[], int n);
int MIN(int a[], int n);
int MAXnegative(int a[], int n);
int MINpositive(int a[], int n);
bool prime_number_test(int n);
bool square_number(int n);
void swap(int &a, int &b);
void sort(int a[], int n, bool x);
int main()
{
    menu();
    int c, n = 0, a[100000];
    bool flag = true;
    do
    {

        cout << "\nSelect function: ";
        cin >> c;
        switch (c)
        {
        case 1:
        {
            cout << "1. Enter the values of the array elements." << endl;
            in_array(a, n);
        }
        break;
        case 2:
        {
            cout << "2. Output the values of the array elements ." << endl;
            out_array(a, n);
        }
        break;
        case 3:
        {
            cout << "3. Count the number of elements of an array with negative values." << endl;
            cout << "==>There are " << count_negative(a, n) << " elements with negative values" << endl;
        }
        break;
        case 4:
        {
            cout << "4. Maximum and minium value of the elements of the array." << endl;
            cout << "==>" << MAX(a, n) << " is the largest value in the array" << endl;
            cout << "==>" << MIN(a, n) << " is the smallest value in the array" << endl;
        }
        break;
        case 5:
        {
            cout << "5. Find the maximum value in the array with negative values and the smallest value in the array with positive values." << endl;
            cout << "==>" << MAXnegative(a, n) << " is the maximum value in the array with negative values" << endl;
            cout << "==>" << MINpositive(a, n) << " is the smallest value in the array with positive values" << endl;
        }
        break;
        case 6:
        {
            cout << "6. List the primes in the array." << endl;
            cout << "==>List the primes in the array: " << endl;
            for (int i = 0; i < n; i++)
            {
                if (prime_number_test(a[i]))
                {
                    cout << a[i] << "\t";
                }
            }
            cout << endl;
        }
        break;
        case 7:
        {
            cout << "7. List the squares in the array." << endl;
            cout << "==>List the squares in the array:" << endl;
            for (int i = 0; i < n; i++)
            {
                if (square_number(a[i]))
                {
                    cout << a[i] << "\t";
                }
            }
            cout << endl;
        }
        break;
        case 8:
        {
            cout << "8. Sort array ascending." << endl;
            sort(a, n, true);
            out_array(a, n);
        }
        break;
        case 9:
        {
            cout << "9. Sort array descending." << endl;
            sort(a, n, false);
            out_array(a, n);
        }
        break;
        case 10:
            menu();
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
    cout << "\n----------Function list----------" << endl
         << "1. Enter the values of the array elements." << endl
         << "2. Output the values of the array elements ." << endl
         << "3. Count the number of elements of an array with negative values." << endl
         << "4. Maximum and minium value of the elements of the array." << endl
         << "5. Find the maximum value in the array with negative values and the smallest value in the array with positive values." << endl
         << "6. List the primes in the array." << endl
         << "7. list the squares in the array." << endl
         << "8. Sort array ascending." << endl
         << "9. Sort array descending." << endl
         << "10. Menu." << endl
         << "0. Exit!" << endl
         << "---------------------------------" << endl;
    ;
}
void in_array(int a[], int &n)
{
    cout << "\nEnter the number of elements in the array : ";
    cin >> n;
    cout << "--------------------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Array[" << i << "]=";
        cin >> a[i];
    }
    cout << "-------------------------------------------" << endl;
}
void out_array(int a[], int n)
{
    cout << "\nArray has just been imported/created:\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int count_negative(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            count++;
        }
    }
    return count;
}
int MAX(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int MIN(int a[], int n)
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
int MAXnegative(int a[], int n)
{
    int negative[count_negative(a, n)];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            negative[j] = a[i];
            j++;
        }
    }
    int max = negative[0];
    for (int i = 0; i < count_negative(a, n); i++)
    {
        if (max < negative[i])
        {
            max = negative[i];
        }
    }
    return max;
}
int MINpositive(int a[], int n)
{
    int positive[n - count_negative(a, n)];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            positive[j] = a[i];
            j++;
        }
    }
    int min = positive[0];
    for (int i = 0; i < n - count_negative(a, n); i++)
    {
        if (min > positive[i])
        {
            min = positive[i];
        }
    }
    return min;
}
bool prime_number_test(int n)
{
    if (n > 1)
    {
        int count = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count != 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}
bool square_number(int n)
{
    if (n > 0)
    {
        if ((int(sqrt(n))) == sqrt(n) && n > 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
void sort(int a[], int n, bool x)
{
    if (x)
    {
        for (int i = 0; i < n; i++)
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
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] < a[j])
                {
                    swap(a[i], a[j]);
                }
            }
        }
    }
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}