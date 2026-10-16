#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n , x , a=1;
    double sum =0 ;
    cout << "n : ";
    cin >> n;
    cout << "x : ";
    cin >> x;
    for(int i=1 ; i<=n ; i++)
    {
        sum += a*pow(x,i) / (i*pow(3,i));
        a *= -1;
    }

    cout << "sum : " << sum;
    return 0;
}
