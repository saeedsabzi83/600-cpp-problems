#include <iostream>

using namespace std;
int fact(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
        fact *= i;
    return fact;
}
int main()
{
    int x,n,k;
    cout << "n : ";
    cin >> n ;
    cout << "k : ";
    cin >> k;
    cout << "x : ";
    cin >> x;
    int sum1=0,sum2=0;
    for(int i=0 ; i<=n ; i++)
        sum1 += fact(x);
    for(int j=1 ; j<=k ; j++)
        sum2 += fact(j);
    cout << (float)sum1 / sum2;
    return 0;
}
