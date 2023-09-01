#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int n;
    cout << "Enter integer n: ";
    cin >> n;
    int count = 0;
    for (int i = 2 ; i <= sqrt(n);i++){
        if (n%i == 0){
            count ++;
        }
    }
    if (count != 0){
        cout << n <<" isn't a prime number\n";
    }
    else{
        
        cout << n <<" is a prime number\n";
        cout << "The sequence of prime numbers from 2 to " << n << " is: "; 
        for (int i = 2; i <= n; i++){
            int count1 = 0;
            for (int j = 2 ; j <= sqrt(i); j++){
                if (i%j == 0){
                    count1 ++;
                }
            }
            if(count1 == 0){
                cout << i << "\t";
            }
        }
    }
}