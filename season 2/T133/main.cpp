#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n , x , a=1;
    cout << "n : ";
    cin >> n;
    cout << "x : ";
    cin >> x;
    double sum = 0;
    for(int i=1 ; i <= n ; i++)
    {
        sum += a*pow(2,i)*pow(x,i) / (i+pow(2,i));
        a *= -1;
    }
    cout << "sum : " << sum ;
    return 0;
}
