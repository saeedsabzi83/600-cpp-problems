#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n : ";
    cin >> n;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
            if(j == n || (i+j >=n+1 && j >= i))
                cout << "* ";
            else
                cout << "  ";
        cout << endl;
    }
    return 0;
}
