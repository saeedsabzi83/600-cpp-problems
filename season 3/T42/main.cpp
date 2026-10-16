#include <iostream>

using namespace std;
int fact(int i)
{
    int sum=1;
    for(int j=1; j<=i; j++)
        sum *= j;
    return sum;
}
float sum(int n)
{
    float sum=0;
    for(int i=1; i<=n; i++)
    {
        sum += (float)i/fact(i);
    }
    return sum;
}
int main()
{
    int n;
    cout << "n : ";
    cin >> n;
    cout << "sum is " << sum(n);
    return 0;
}
