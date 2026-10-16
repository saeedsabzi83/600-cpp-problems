#include <iostream>

using namespace std;
float pow(double x , int i)
{
    float p=1;
    for(int j=1; j<=i;j++)
        p *= x;
    return p;
}

float fact(int i)
{
    int f=1;
    for(int j=1 ; j<=i ; j++)
        f *= j;
    return f;
}
int main()
{
    double n,x,sum=0;
    cout << "n : ";
    cin >> n;
    cout << "x : ";
    cin >> x;
    int a=1;
    for(int i=1;i<=n;i = i+2)
    {
        sum += a*pow(x,i)/fact(i);
        a = -a;
    }
    cout << "sum : " << sum;
    return 0;
}
