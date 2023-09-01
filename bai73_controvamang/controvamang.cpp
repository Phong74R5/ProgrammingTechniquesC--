// #include <iostream>
// using namespace std;
// int main()
// {
//     int numbers[5], *p;
//     p = numbers;
//     *p = 10;
//     p++;
//     *p = 20;
//     p = &numbers[2];
//     *p = 30;
//     p = numbers + 3;
//     *p = 40;
//     p = numbers;
//     *(p + 4) = 50;
//     for (int n = 0; n < 5; n++)
//     {
//         // cout << numbers[n] << "\t";
//         cout << *(p + n) << "\t";
//     }
// }

#include <stdio.h>
int main()
{
    int a = 1;
    if (a)
    {
        printf("All is Well ");
        printf("I am Well\n");
    }
    else if(a=10)
        printf("I am not a River\n");
}