#include <iostream>

using namespace std;

int main()
{
    float m , n , a , b , c ;
    cout << "m : " ;
    cin >> m ;
    cout << "n : " ;
    cin >> n ;
    a = m*m - n*n ;
    b = 2 * m *n ;
    c = m * m + n * n ;
    cout << "a : "<< a << "\nb : " << b << "\nc : "<< c ;
    return 0;
}
