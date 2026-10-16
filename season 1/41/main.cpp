#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "a : ";
    cin >> a ;
    cout << "b : ";
    cin >> b ;
    cout << "a+b : " << a+b ;
    cout << "\na-b : " << a-b ;
    cout << "\na*b : " << a*b ;
    cout << "\na/b : " << (float)a/b ;
    cout << "\na^2 + b^2 : " << a*a + b*b ;
    cout << "\na^3 + b^3 : " << a*a*a + b*b*b ;
    return 0;
}
