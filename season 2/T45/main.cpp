#include <iostream>

using namespace std;
int fact(int n)
{
    int fact =1;
    for(int i=1 ; i<=n ; i++)
        fact *= i;
    return fact;
}
int power(int n , int i)
{
    int p =1;
    for(int j=1 ; j<= i ; j++)
        p *= n;
    return p;
}
int main()
{
    int n , s=1 , x;
    float sum =0;
    cout << "n : ";
    cin >> n;
    cout << "x : ";
    cin >> x;
    for(int i=2 ;i <= n ;i = i+2)
    {
        if(s == 1)
            cout << " + " << x << "^" << i << "/" << i << "!";
        else
            cout << " - " << x << "^" << i << "/" << i << "!";
        sum += (float) s*power(x,i)/fact(i);
        s *= -1;
    }
    cout << " = " << sum;
    return 0;
}
