#include<iostream>
using namespace std;
int main()
{
    int x,n;
    cout << "x : ";
    cin >> x;
    cout << "n : ";
    cin >> n;

    float p1=1,p2=1,p3=1,f1=1,f2=1,f3=1;

    //p1
    for(int i=1; i<=n; i++)
        p1 *= x;

    //p2
    for(int i=1; i<=x; i++)
        p2 *= n;

    //p3
    for(int i=1; i<=(n+x); i++)
        p3 *= (x+n);

    //f1
    for(int i=1; i<=n; i++)
        f1 *= i;

    //f2
    for(int i=1; i<=x; i++)
        f2 *= i;

    //f3
    for(int i=1; i<=(n+x); i++)
        f3 *= i;

    float sum1=0,sum2=0;
    
    //sum1
    sum1 = (p1 * p2 * p3) / (f1 * f2 * f3);

    for(int i=1; i<=n; i++)
    {
        float p4=1,p5=1,f4=1,f5=1;
    //p4
        for(int j=1; j<=i; j++)
            p4 *= x;
        
    //p5
        for(int j=1; j<=x; j++)
            p5 *= i;
            
    //f4
        for(int j=1; j<=i ; j++)
            f4 *= j;

    //f5
        for(int j=1; j<=(n+i); j++)
            f5 *= j;

    //sum2
        sum2 += (p4 * p5) / (f1 * f4 * f5);
    }

    //hosel
    cout << "hosel : " << sum1 * sum2;
}