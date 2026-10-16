#include <iostream>
#include<math.h>

using namespace std;

int fact(int x)
{
    int fact =1 ;
    for(int i=2 ; i<=x ; i++)
        fact *= i;
    return fact;
}
int main()
{
    int x , n , p=1 , m=2 , a=1  ;
    double sum =0;
    cout << "n : ";
    cin >> n;

    cout << "x : ";
    cin >> x;

    for(int i=1 ; i<=n ; i++)
    {
        sum += ((pow(x,p) + a*x/m))/fact(i);
        p += 2;
        m += 2;
        a *= -1;
    }
    cout << "sum : " << sum;
    return 0;
}
