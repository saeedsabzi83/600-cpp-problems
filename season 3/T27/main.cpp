#include <iostream>

using namespace std;
bool isSquare(int n)
{
    int i=0;
    while(i <= n)
    {
        if(i*i == n)
            return 1;
        i++;
    }
    return 0;
}
int main()
{
    int n;
    cout << "number : ";
    cin >> n;
    if(isSquare(n))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
