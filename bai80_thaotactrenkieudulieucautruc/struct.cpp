#include <iostream>
using namespace std;
struct point
{
    int x;
    int y;
};
typedef struct point point;
void enter(point &p)
{
    cout << "Enter x:";
    cin >> p.x;
    cout << "Enter y:";
    cin >> p.y;
}
void out(point p)
{
    cout << "\npoint coordinates: (" << p.x << "," << p.y << ")" << endl;
}
point SUM(point p1, point p2)
{
    point temp;
    temp.x = p1.x + p2.x;
    temp.y = p1.y + p2.y;
    return temp;
}
int main()
{
    point A, B, AB;
    cout << "Enter coordinates A: \n";
    enter(A);
    out(A);
    cout << "Enter coordinates B: \n";
    enter(B);
    out(B);
    cout << "\nThe sum of the two coordinates is: ";
    AB = SUM(A, B);
    out(AB);
}