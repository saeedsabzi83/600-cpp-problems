#include <iostream>

using namespace std;

int main()
{
    int x ;
    cout << " ( 10,000 <= x <= 99,999 ) \n enter x :    " ;
    cin >> x ;
    if(x < 10000 || x > 99999 )
        cout << "no :\ ";
    else
    {
        int r1,r2,r3,r4,r5;
        r5 = x % 10 ;
        x /=10;
        r4 = x % 10 ;
        x /=10;
        r3 = x % 10 ;
        x /=10;
        r2 = x % 10 ;
        x /=10;
        r1 = x % 10 ;
        cout << r1 << "   " << r2 << "   "<< r3 << "   " << r4 << "   " << r5 ;
    }
    return 0;
}
