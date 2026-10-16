#include <iostream>

using namespace std;
int fact(int n)
{
    int fact =1;
    for(int i=1 ; i<=n ; i++)
        fact *= i;
    return fact;
}
int main()
{
    int n , s=1;
    float sum =0;
    cout << "n : ";
    cin >> n;
    for(int i=1 ;i <= n ;i++)
    {
        if(s == 1)
            cout << " + " << i << "/" << i << "!";
        else
            cout << " - " << i << "/" << i << "!";
        sum += (float) s*i/fact(i);
        s *= -1;
    }
    cout << " = " << sum;
    return 0;
}
