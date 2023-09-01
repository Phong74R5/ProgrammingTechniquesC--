#include <iostream>
using namespace std;
int main (){
    int y, m, d;
    cout << "Enter date value: ";
    cin >> d;
    cout << "enter month value: ";
    cin >> m;
    cout << "enter year value: ";
    cin >> y;
    bool flag = false;
        switch (m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: if (d <= 31) {flag = true;}break;
        case 4:
        case 6:
        case 9:
        case 11: if (d <= 30) {flag = true;}break;
        case 2:{
            if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
            {
                if (d <= 29){
                    flag = true;
                }
                else {
                    if (d <= 28){
                        flag = true;
                    }
                }
            }
        }break;
    }
    if (flag == true){
        cout << "correct!!\n";
        if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)){
            cout << y <<" is leap year";
        }
        else{
            cout << y <<" isn't leap year";
        }
    }
    else{
        cout << "incorrect!!";
    }
}