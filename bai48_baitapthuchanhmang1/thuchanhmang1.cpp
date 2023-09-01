// #include <iostream>
// using namespace std;
// void in_array(int a[],int &n){
//     cout <<"Size of array: ";
//     cin >>n;
//     for (int i = 0;i<n;i++){
//         cout <<"\na["<<i<<"]=";
//         cin>>a[i];
//     }
// }
// void out_array(int a[],int &n){
//     cout<<"\nthe array just entered:\n";
//     for(int i = 0;i<n;i++){
//         cout <<"a["<<i<<"]="<<a[i]<<endl;
//     }
// }
// void Median(int n,int a[],float &medplus,float &medminus){
//     int S_plus = 0;
//     int S_minus = 0;
//     int count_plus = 0;
//     int count_minus = 0;
//     for(int i = 0;i<n;i++){
//         if(a[i]>0){
//             count_plus++;
//             S_plus+=a[i];
//         }
//         else{
//             if (a[i]<0){
//                 count_minus++;
//                 S_minus+=a[i];
//             }
//         }
//     }
//     if(count_plus>0){
//         medplus=float(S_plus)/count_plus;
//     }
//     if(count_minus>0){
//         medminus=float(S_minus)/count_minus;

//     }
    
// }
// int main(){
//     int a[20],n;
//     in_array(a,n);
//     out_array(a,n);
//     float plus,minus;
//     Median(n,a,plus,minus);
//     cout <<"Median_plus: "<<plus<<endl<<"Median_minus: "<<minus<<endl;
// }
#include<iostream>
using namespace std;
bool kiemtrasohoanthien(int n);
void xuatsohoanthien(int n);
int main(){
    xuatsohoanthien(6);
}

bool kiemtrasohoanthien(int n){
    int temp=0;
    for(int i=1;i<n;i++){
            int a = n%i;
            if(a==0){
                temp+=i;
            }
            
    }
    if(temp==n){
                return true;
            }
    return false;
}
void xuatsohoanthien(int n){
     if(kiemtrasohoanthien(n)==true){
        cout<<n<<" la so hoan thien";
     }
     else{
        cout <<n<<" ko phai la so hoan thien";
     }
     }