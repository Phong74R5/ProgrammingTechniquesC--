#include <iostream>
using namespace std;
int main (){
    int number;
    float unitprice, discount, freight, money;
    cout << "Enter the quantity of goods: ";
    cin >> number;
    cout << "Enter the unit price of the goods: ";
    cin >> unitprice;
    discount = number * unitprice * 0.12;
    freight = number * unitprice * 0.05;
    money = number * unitprice - discount + freight;
    cout << "Commodity information:\n";
    cout << "\tDiscount: " << discount << endl;
    cout << "\tFreight: " << freight << endl;
    cout << "\tThe total amount you have to pay: " << money << endl;
    return 0;
}