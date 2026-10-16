#include <iostream>

using namespace std;

int main()
{
    int num , r1 , r2 , r3 ;
    cout << "enter number (100 - 999) : " ;
    cin >> num ;
    if(num <100 || num > 999)
        {cout << "waring!";
        return 0 ;}
    r1 = num % 10 ;
    r2 = num / 10 % 10 ;
    r3 = num / 100 ;
    cout << "r1:" << r1 << "\tr2:" << r2 << "\tr3:" << r3;
    (r2 == r1 + r3) ? cout << "\nyes" : cout << "\nno";
    return 0;
}
