#include <iostream>

using namespace std;

float pow(float x, int i)
{
    int p=1;
    for(int j=1; j<= i; j++)
        p *= x;
    return p;
}

long mul(int i)
{
    long m=1;
    for(int j=2; j<=i ; j += 2)
        m *= j;
    return m;
}

float sum(float x , int n)
{
    int z = -1;
    float s =0;
    for(int i=1; i<=n; i++)
    {
        s += (float)pow(x,i*2)/(mul(i*2)*z);
        z *= -1;
    }
    return s;
}

int main()
{
    float x;
    int n;
    cout << "x : ";
    cin >> x;
    cout << "n : ";
    cin >> n;
    float s = sum(x,n);
    cout << "sum is " << s;
    return 0;
}
