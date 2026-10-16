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
    if(a*a + b*b == c*c)
        cout << a*b/2;
    else if(b*b + c*c == a*a)
        cout << b*c/2;
    else if(c*c + a*a == b*b)
        cout << c*a/2;
    else
        cout << a+b+c;
    return 0;
}
