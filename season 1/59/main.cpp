#include <iostream>

using namespace std;

int main()
{
    float a , b , c , x , y ;
    cout << "I1 = 3x + c \nI2 = ax + b" << endl ;
    cout << "a : ";
    cin >> a ;
    cout << "b : ";
    cin >> b ;
    cout << "c : ";
    cin >> c ;
    x = (b-c) / (3-a);
    y = 3*x + c ;
    cout << "(" << x << "," << y << ")" ;
    return 0;
}
