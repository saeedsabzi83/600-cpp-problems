#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n : ";
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(i*2-2); j++)
            cout << " ";
        for(int j=i; j<=n; j++)
            cout << "*";
        cout << endl;
    }
    for(int i=n-1; i>=1; i--)
    {
        for(int j=(i*2-2); j>=1; j--)
            cout << " ";
        for(int j=n; j>=i; j--)
            cout << "*";
        cout << endl;
    }
    return 0;
}
