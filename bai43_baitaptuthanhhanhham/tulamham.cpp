#include <iostream>
#include <math.h>
using namespace std;
bool perfect_number_test(int n);
bool prime_number_test(int n);
bool square_number(int n);
void menu();
int main(){
    menu();
    bool flag = true;
    do{
        int n, a;
        cout <<"Select function: ";
        cin >> n;
        switch (n){
            case 1:{
                cout <<"\nCheck prime number!!\n";
                cout << "\nEnter the number to check: ";
                cin >>a;
                if (prime_number_test(a)){
                    cout <<endl<< a << " is a prime number"<<endl;
                }
                else{
                    cout <<endl <<a<<" isn't a prime number"<<endl;
                }
            }
            break;
            case 2:{
                cout <<"\nCheck perfect number!!\n";
                cout <<"\nEnter the number to check: ";
                cin >>a;
                if (perfect_number_test(a)){
                    cout <<endl<<a<<" is a perfect number"<<endl;
                }
                else{
                    cout <<endl<<a<<" isn't a perfect number"<<endl;
                }
            }
            break;
            case 3:{
                cout <<"\nCheck square number!!\n";
                cout <<"\nEnter the number to check: ";
                cin >>a;
                if (square_number(a)){
                    cout <<endl<<a<<" is a square number"<<endl;
                }
                else{
                    cout <<endl<<a<<" isn't a square number"<<endl;
                }
            }
            break;
            case 4:menu();break;
            case 0: flag = false;break;
        }
    }while (flag == true);
}
bool perfect_number_test(int n){
    int S = 0;
    if (n == 1){
        return false;
    }
    for (int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            S += i;
            int temp = n / i;
            if (temp != i && temp != n){
                S += temp;
            }
        }
    }
    if (S == n){
        return true;
    }
    else{
        return false;
    }
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
bool square_number(int n){
    if((int(sqrt(n))) == sqrt(n)){
        return true;
    }
    else{
        return false;
    }
}
void menu(){
    cout << "\n----------Function list----------"<<endl
         << "1. Check prime number."<<endl
         << "2. Check perfect number."<<endl
         << "3. Check square number."<<endl
         << "4. Menu."<<endl
         << "0. Exit!"<<endl;
}