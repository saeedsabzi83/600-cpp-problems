#include <iostream>

using namespace std;

int main()
{
    int n,multiply=1,digit;
    cout << "please enter number : ";
    cin >> n;
    cout << " number     digit      multiply \n";
    cout << "========   =======    ========== \n";
    while(n > 0)
    {
        digit = n % 10 ;
        if(digit % 2 == 1)
            multiply *= digit;
        cout << n << "\t      " << digit << "\t           " << multiply << endl;
        n /= 10;
    }

    return 0;
}
