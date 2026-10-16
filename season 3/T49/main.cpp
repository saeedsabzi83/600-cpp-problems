#include <iostream>

using namespace std;
int isTriangle(int a, int b, int c)
{
    if(!(a+b > c && a+c > b && c+b > a))
        return 0;
    else if(a == b && a == c && b == c)
        return 3;
    else if(a==b || a==c || c==b)
        return 2;
    else if(a*a == b+c || b*b == a+c || c*c == a+b)
        return 1;
    else
        return -1;
}
void printMessage(int n)
{
    switch(n)
    {
        case 0:
            cout << "mosalas nist";
            break;
        case 1:
            cout << "right angled";
            break;
        case 2:
            cout << "isosceles triangle";
            break;
        case 3:
            cout << "equilateral triangle";
            break;
    }
}
int main()
{
    int a,b,c;
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << "c : ";
    cin >> c;
    printMessage(isTriangle(a,b,c));
    return 0;
}
