#include <iostream>

using namespace std;

int main()
{
    int n , f1 = 1 , f2 = 1 , f3;
    cout << "please enter number : ";
    cin >> n ;
    if(n == 0 )
        {
            cout << "no " << n << " is`n fibonochi " ;
            return 0 ;
        }
    
    if(n == 1 )
        {
            cout << "yes " << n << " in fibonochi " ;
            return 0 ;
        }
    while(f3 < n )
    {
        f3 = f1 + f2 ;
        f1 = f2 ;
        f2 = f3 ;
        if(f3 == n)
            cout << "yes " << n << " in fibonochi " ;
        if(f3 > n)
            cout << "no " << n << " is`n fibonochi " ;
    }
    return 0;
}
