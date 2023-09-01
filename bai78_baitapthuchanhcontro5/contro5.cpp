#include <iostream>
using namespace std;
void in_matrix(float *a, int n)
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
void out_matrix(float *a, int n)
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
void matrix_transpose(float *a, float *b, int n)
{
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            *(b + (j * n + i)) = *(a + (i * n + j));
        }
    }
}
int main()
{
    float *a, *b;
    int n;
    cout << "Enter integer n: ";
    cin >> n;
    a = new float[n * n];
    b = new float[n * n];
    if (a == NULL)
    {
        cout << "Update error!!";
        exit(0);
    }
    in_matrix(a, n);
    out_matrix(a, n);
    cout << "\nMatrix after transpose:\n";
    matrix_transpose(a, b, n);
    out_matrix(b, n);
    delete a, b;
}