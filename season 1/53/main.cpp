#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "x : " ;
    cin >> x ;
    cout << "y : ";
    cin >> y ;
    x = x+y;
    y = x-y ;
    x = x-y ;
    cout << "x : " << x << "\n" << "y : " << y ;

    return 0;
}
