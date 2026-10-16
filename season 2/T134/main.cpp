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
        sum += pow(x,i) / pow(5,i-1);
    }

    cout << "sum : " << sum;
    return 0;
}
