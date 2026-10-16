#include <iostream>

using namespace std;

int main()
{
    int n , digit;
    cout << "n : ";
    cin >> n;

    while(n > 0)
    {
        digit = n % 10;
        if( digit % 2 == 0)
            cout << digit << "\t";
        n /= 10;
    }
    return 0;
}
