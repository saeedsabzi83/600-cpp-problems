#include<iostream>

using namespace std;

int main()
{
    int n,digit ,x=0,p=1;
    cout << "n :";
    cin >> n;

    int temp = n;

    while(temp > 0)
    {
        digit = temp%10;
        digit++;
        if(digit == 10)
            digit = 0;
        x += digit * p;
        p *= 10;
        temp /= 10;
    }
    cout << "x : " << x ;
}
