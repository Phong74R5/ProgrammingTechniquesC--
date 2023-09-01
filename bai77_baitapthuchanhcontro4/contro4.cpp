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
float find_max(float *a, int n)
{
    float max = *a;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(a + (i * n + j)) > max)
                max = *(a + (i * n + j));
        }
    }
    return max;
}
bool check_symmetry(float *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(a + (i * n + j)) != *(a + (j * n + i)))
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    float *a;
    int n;
    cout << "Enter integer n: ";
    cin >> n;
    a = new float[n * n];
    if (a == NULL)
    {
        cout << "Update error!!";
        exit(0);
    }
    in_matrix(a, n);
    out_matrix(a, n);
    cout<<"\nMAX = "<<find_max(a,n)<<endl;
    if(check_symmetry(a,n)){
        cout<<"\nSymmetric matrix";
    }
    else{
        cout<<"\nAsymmetric matrix";
    }
    delete a;
}