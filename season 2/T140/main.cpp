#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cout << "n : ";
    cin >> n;
    cout << "k : ";
    cin >> k;
    for(int i=1 ; i <= n ; i++)
    {
        for(int j=1 ; j <= i; j++)
            cout << k ;
        if(i != n)
            cout << " + ";
    }
    return 0;
}
