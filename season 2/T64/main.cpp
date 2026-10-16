#include <iostream>

using namespace std;
double power(int n , int x)
{
    double z=1;
    for(int i=1 ; i<=n ; i++)
        z *= x;
        //cout << z << "\t";}
    return z;
}
int main()
{
    int x , n , sum=0;
    cout << "x : ";
    cin >> x;
    cout << "n : ";
    cin >> n;
    for(int i=1 ; i<=n ; i++)
        sum += power(i,x);
    cout << "sum : " << sum;
    return 0;
}
