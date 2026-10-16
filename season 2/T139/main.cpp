#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n : ";
    cin >> n;
    int spac = n;
    for(int i=1 ; i <= n ; i++)
    {
        for(int j=spac ; j > 0 ; j--)
            cout << " ";
        spac--;
        for(int z=1 ; z<=i; z++)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
