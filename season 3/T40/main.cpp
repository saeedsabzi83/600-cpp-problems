#include <iostream>

using namespace std;
bool isDigit(char ch)
{
    return (( ch >= '0' && ch <= '9') ? true : false);
}

bool isUpper(char ch)
{
    return ((ch >= 'A' && ch <= 'Z') ? true : false);
}

bool isLower(char ch)
{
    return ((ch >= 'a' && ch <= 'z') ? true : false);
}
int main()
{
    char ch;
    cout << "char : ";
    cin >> ch;
    if(isDigit(ch))
        cout << ch << " is Digit";
    else if(isUpper(ch))
        cout << ch << " is Upper";
    else if(isLower(ch))
        cout << ch << " is Lower";
    return 0;
}
