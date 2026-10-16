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
    while(n <=0 || n >= 81);

    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
            if(i == 1 || (i+j <= n+1 && j >= i))
                cout << "* ";
            else
                cout << "  ";
        cout << endl;
    }
    return 0;
}
