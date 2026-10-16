#include <iostream>

using namespace std;

int main()
{
    int a , b , c;
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << "c : ";
    cin >> c;
    if( a == b && b == c && a == c)
        cout << "motesovi alozzelo";
    else if(a == b || b == c || a == c)
        cout << "motesovi soghein";
    else
        cout << "mokhtalefo azlo";
    return 0;
}
