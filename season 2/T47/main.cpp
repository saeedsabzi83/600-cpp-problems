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
    switch(x)
    {
        case '+' :
        case 'A' :
        case 'a' :
            cout << (float)n1 + n2;
            break;
        case '-' :
        case 'S' :
        case 's' :
            cout << (float)n1 - n2 ;
            break;
        case '*' :
        case 'x' :
        case 'X' :
            cout << (float)n1 * n2;
            break;
        case '/' :
        case 'd' :
        case 'D' :
            cout << (float)n1 / n2;
            break;
        case '%' :
        case 'm' :
        case 'M' :
            cout << (float)(n1 % n2);
            break;
        default :
            cout << "\n invalid operator ";
    }
    return 0;
}
