#include <iostream>

using namespace std;

int main()
{
    float m , mile , x ;
    cout << "masraf (liter) : " ;
    cin >> m ;
    cout << "masofat (mile) : " ;
    cin >> mile ;
    x = ( mile / m ) * 0.264179 ;
    cout << "mile / gallons " << x ;
    return 0;
}
