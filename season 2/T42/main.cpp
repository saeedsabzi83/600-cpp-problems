#include <iostream>

using namespace std;

int main()
{
    int n , sum =0 , s = -1;
    cout << " n : ";
    cin >> n;
    for(int i=1 ; i<= n ; i++)
    {
        if( s == 1)
            cout << " + ";
        else if( s == -1)
            cout << " - ";
        cout << i ;
        sum += i * s;
        s *= -1;
    }
    cout << " = " << sum;
    return 0;
}
