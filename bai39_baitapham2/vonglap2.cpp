#include <iostream>
#include <math.h>
using namespace std;
bool prime_number_test(int n);
void output_prime_number(int n);
int SUM_prime_number(int n);
int main (){
    int n;
    cout << "Enter integer n: ";
    cin >> n;
    output_prime_number(n);
    cout << "Sum of primes: "<<SUM_prime_number(n);
    
}
bool prime_number_test(int n){
    int count = 0;
    for (int i = 2 ; i <= sqrt(n);i++){
        if (n%i == 0){
            count ++;
        }
    }
    if (count != 0){
        return false;
    }
    else{
        return true;
    }
}
void output_prime_number(int n){
    cout << "The sequence of prime numbers from 2 to " << n << " is: "; 
    for (int i = 2; i <= n; i++){
        if(prime_number_test(i)){
            cout << i <<"\t";
        }
    }
    cout << endl;
}
int SUM_prime_number(int n){
    int S = 0;
    for (int i = 2; i <= n; i++){
        if(prime_number_test(i)){
            S += i;
        }
    }
    return S;
}