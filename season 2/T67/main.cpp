#include <iostream>

using namespace std;

int main()
{
    int n;
    do
    {
        cout << "n : ";
        cin >> n;
    }
    while(n<1 || n >80);

    for(int i=1 ; i<=n ; i++)
        cout << " * ";
    cout << "\n";
    for(int j=0 ; j<=n-2 ; j++)
    {
        cout << " * ";
        for(int i=0 ; i<n-2 ; i++)
            cout << "   ";
        cout << " * \n";
    }
    for(int i=1 ; i<=n ; i++)
        cout << " * ";

    return 0;
}
