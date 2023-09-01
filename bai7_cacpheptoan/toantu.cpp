#include <iostream>
using namespace std;
int main(){
    int m = 1, n = 2, p = 3;
    int min = (m < n ? (m < p ? m : p) : (n < p ? n : p));
    cout << min << endl;
    return 0;
}