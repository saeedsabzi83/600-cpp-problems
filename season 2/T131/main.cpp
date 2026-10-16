#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n,a=-1,b=2;
    cout << "n : " ;
    cin >> n;
    double c,x,sum=0;
    cout << "x : ";
    cin >> x;
    for(int i=1 ; i<=n ; i++)
    {
        c = pow(x,b);
        sum += (a*c) / ((b-1)*(b+1));
        a *= -1;
        b += 2;
    }
    cout << "sum : " << sum;
    return 0;
}
