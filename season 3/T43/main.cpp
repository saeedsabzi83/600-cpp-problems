#include <iostream>

using namespace std;
int fact(int i)
{
    int sum=1;
    for(int j=1; j<=i; j++)
        sum *= j;
    return sum;
}
float pow(float x, int i)
{
    int p=1;
    for(int j=1; j<= i; j++)
        p *= x;
    return p;
}
float sum(int n, float x)
{
    float sum=0;
    for(int i=1; i<=n; i++)
    {
        sum += (float)pow(x,i)/fact(i);
    }
    return sum;
}
int main()
{
    float x;
    int n;
    cout << "n : ";
    cin >> n;
    cout << "x : ";
    cin >> x;
    cout << "sum is " << sum(n,x);
    return 0;
}
