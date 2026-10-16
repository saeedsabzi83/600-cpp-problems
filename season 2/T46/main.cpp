#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    char x;
    cout << "n1 : ";
    cin >> n1;
    cout << "n2 : ";
    cin >> n2;
    cout << "for +  --> + , a , A \nfor -  --> - , s , S \nfor *  --> * , s , S \nfor /  --> / , d , D \nfor %  --> % , m , M";
    cout << "\nx : ";
    cin >> x;
    if(x == 'a' || x == 'A' || x == '+')
        cout << n1 + n2;
    else if(x == 's' || x == 'S' || x == '-')
        cout << n1 - n2;
    else if(x == 'x' || x == 'X' || x == '*')
        cout << n1*n2;
    else if(x == 'd' || x == 'D' || x == '/')
        cout << n1 / n2;
    else if(x == 'm' || x == 'M' || x == '%')
        cout << n1 % n2;
    else
        cout << "invalid operator";
    return 0;
}
