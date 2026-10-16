#include <iostream>

using namespace std;

int main()
{
    float m , y ;
    cout << "year : " ;
    cin >> y ;
    m = y * 365.25 * 24 * 60 * 60 ;
    cout << "m : " << m ;
    return 0;
}
