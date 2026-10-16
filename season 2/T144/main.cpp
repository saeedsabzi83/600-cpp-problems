#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n : ";
    cin >> n;
    for(int i=n ; i>=0 ; i--)
    {
        for(int j=1 ; j<=i;j++)
            cout <<  " ";
        for(int z=1 ; z<=n ; z++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
