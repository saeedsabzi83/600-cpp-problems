#include <iostream>

using namespace std;

int main()
{
    int n,y=1;
    cout << "n : ";
    cin >> n;
    float sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum += (float)1/y;
        y *= 2;
    }
    cout << "sum : " << sum;
    return 0;
}
