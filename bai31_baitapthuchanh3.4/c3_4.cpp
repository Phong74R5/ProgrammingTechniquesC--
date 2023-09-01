#include <iostream>
using namespace std;
int main (){
    int count = 0;
    for(int x=0; x <= 135; x++){
        for(int y=0; y <= 135; y++){
            for(int z=0; z <= 135; z++)
            if (3*x+5*y+7*z==135)
            {
                cout << "(x,y,z):"<<"("<<x<<","<<y<<","<<z<<")"<<endl; 
                count ++;
            }
        }
    }
    cout << "The whole solution: "<<count;
}