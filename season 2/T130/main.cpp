#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int n , j = -1 , a=1;
    cout << "n : ";
    cin >> n;
    double x;
    cout << "x : ";
    cin >> x;
    double sum =0;
    for(int i=1 ; i<=n ; i++)
    {
        sum = sum + (j*(double)pow(x,a) / (a + a+1));
        
        j = j*-1;
        a = a+2;
    }

    cout << "sum : " << sum;
}