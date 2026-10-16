#include <iostream>

using namespace std;

int main()
{
    int x,y,z ;
    cout << "x : " ;
    cin >> x ;
    cout << "y : " ;
    cin >> y ;
    z = x*x*x + 2*x*x + 3*y - 5 ;
    cout << "x^3 + 2x^2 + 3y - 5 : " << z ;
    return 0;
}
