#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
   int n;
   double x, Z;
   cout << "Input integer n:";
   cin >> n;
   cout << "Input real number x:";
   cin >> x;
   Z = (2*x + sqrt(n))/13;
   cout << "\nResult: " << setprecision(n) <<Z;
}