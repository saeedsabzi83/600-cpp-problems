#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    float a , b , y ;
    cout << "y = b * sin(a)";
    cout << endl << "a : " ;
    cin >> a ;
    cout << "b : ";
    cin >> b ;
    a = a * 3.14 /180 ;
    y = b * sin(a);
    cout << "y = " << y ;
    return 0;
}
