#include <iostream>

using namespace std;
int fact(int i)
{
    int sum=1;
    for(int j=1; j<=i; j++)
        sum *= j;
    return sum;
}
int sumfact(int n)
{
    int sum=0;
    for(int i=1; i<=n ; i++)
    {
        sum += fact(i);
    }
    return sum;
}
int main()
{
    int n,sum=0;
    cout << "n : " ;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        if(i<n)
            cout << i << "! + ";
        else
            cout << i << "! = ";
    }
    cout << sumfact(n);
    return 0;
}
