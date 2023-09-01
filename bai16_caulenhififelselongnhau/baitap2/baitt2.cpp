#include <iostream>
using namespace std;
int main (){
    float gpa;
    cout << "Enter GPA: ";
    cin >> gpa;
    if (gpa <=10 && gpa >= 9){
        cout << "excellent";
    }
    else {
        if (gpa < 9 && gpa >= 8){
            cout << "very good";
        }
        else {
            if (gpa < 8 && gpa >= 7){
                cout << "good";
            }
            else {
                if (gpa < 7 && gpa >= 5){
                    cout << "average";
                }
                else {
                    cout << "poor";
                }
            }
        }
    }
}