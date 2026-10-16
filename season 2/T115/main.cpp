#include <iostream>

using namespace std;

int main()
{
    int n ;
    float sum1=0 , sum2=0 , var=0 , x=0 ;
    cout << "n : ";
    cin >> n;
    for(int i=1 ; i<=n ; i++)
    {
        cout << "x : ";
        cin >> x;
        sum1 += x*x;
        sum2 += x;
    }
    var = 1.0 / n*sum1 - (1.0 /n * sum2) * (1.0 /n * sum2);
    cout << "var : " << var;
    return 0;
}
