#include <iostream>

using namespace std;

int main()
{
    int n , sum =0 ;
    cout << " n : ";
    cin >> n;
    for(int i=1 ; i<= n ; i++)
    {
        cout << i ;
        if(i != n)
            cout << " + ";
        else
            cout << " = ";
        sum += i;
    }
    cout << sum;
    return 0;
}
