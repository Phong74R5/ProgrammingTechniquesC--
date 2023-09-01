#include <iostream>
using namespace std;
int main (){
    int n, n1, n2 , n3;
    again:
    cout << "enter a 3-digit integer: ";
    cin >> n;
    if ( n >= 1000){
        goto again;
    }
    n3 = n / 100;
    n2 = (n % 100) / 10;
    n1 = (n % 100) % 10;
    
    switch (n3){
        case 1:cout << "one hundred ";break;
        case 2:cout << "two hundred ";break;
        case 3:cout << "three hundred ";break;
        case 4:cout << "four hundred ";break;
        case 5:cout << "five hundred ";break;
        case 6:cout << "six hundred ";break;
        case 7:cout << "seven hundred ";break;
        case 8:cout << "eight hundred ";break;
        case 9:cout << "nine hundred ";break;
    }
    if (n3 != 0&& n2 !=0 ){
        cout << "and";
    }
    switch (n2){
        case 1:{
            switch (n1){
                case 0: cout << " ten";break;
                case 1: cout << " eleven";break;
                case 2: cout << " twelve";break;
                case 3: cout << " thirteen";break;
                case 4: cout << " fourteen";break;
                case 5: cout << " fifteen";break;
                case 6: cout << " sixteen";break;
                case 7: cout << " seventeen";break;
                case 8: cout << " eightteen";break;
                case 9: cout << " nineteen";break;
            }
        }break;
        case 2:cout << " twenty";break;
        case 3:cout << " thirty";break;
        case 4:cout << " fourty";break;
        case 5:cout << " fifty";break;
        case 6:cout << " sixty";break;
        case 7:cout << " seventy";break;
        case 8:cout << " eightty";break;
        case 9:cout << " ninety";break;
    }
    if (n2 != 0 && n1 != 0&& n2 != 1){
        cout << "-";
    }
    if (n2 != 1){
        switch (n1){
        case 1:cout << " one ";break;
        case 2:cout << " two ";break;
        case 3:cout << " three ";break;
        case 4:cout << " four ";break;
        case 5:cout << " five ";break;
        case 6:cout << " six ";break;
        case 7:cout << " seven ";break;
        case 8:cout << " eight ";break;
        case 9:cout << " nine ";break;
    }
    }
}