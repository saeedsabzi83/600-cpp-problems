#include <iostream>

using namespace std;
int mul(int s, int i)
{
    int p=1;
    if(s == 1)
        for(int j=1; j<=i ; j=j+2)
            p *=j;
    else
        for(int j=2; j<=i ; j=j+2)
            p *= j;
    return p;
}
float pow(float x, int i)
{
    int p=1;
    for(int j=1; j<= i; j++)
        p *= x;
    return p;
}
float sum(float x, int n)
{
    float sum=0;
    for(int i=1; i<=n; i++)
    {
        sum += pow(x,i)/mul(i%2,i);
    }
    return sum;
}
int main()
{
    int n;
    float x;
    cout << "n : ";
    cin >> n;
    cout << "x : ";
    cin >> x;
    float s = sum(x,n);
    cout << "s is " << s;
    return 0;
}
