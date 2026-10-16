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
    for(int i=1; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
            if(i==1 || j==1 || i==n || j== n || i == j)
                cout << " * ";
            else
                cout << "   ";
        cout << endl;
    }
    return 0;
}
