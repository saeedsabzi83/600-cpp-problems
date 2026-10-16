#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cout << "n : ";
    cin >> n;
    m = 1 << (sizeof(int)*8 - 1);
    if(n & m )
        cout << "yes";
    else
        cout << "no";
    return 0;
}
