#include <iostream>

using namespace std;
int fact(int n)
{
    int fact = 1 ;
    int a = n ;
    for(int i=2 ; i<=n ; i++)
    {
        fact *= i;
        a /= 10 ;
    }
    return fact ;
}
int main()
{
    int n ;
    double sum = 0 ;
    cout << " n : " ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++)
        sum += (double)1/fact(i);
    cout << sum ;
    return 0;
}
