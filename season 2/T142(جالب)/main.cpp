#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n : ";
    cin >> n;
    if(n & 1)
        cout << "yes";
    else
        cout << "no";
    return 0;
}
