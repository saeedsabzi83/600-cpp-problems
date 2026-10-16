#include <iostream>

using namespace std;

int main()
{
    int n , x;
    cout << "x: ";
     cin >> x;
     cout << "n : ";
     cin >> n;

     float p1=1 , p2=1 , p3=1 , p4=1 , f1=1 , f2=1 , f3=1 ;
     float r1=1;
     for(int i=1 ; i<=n ; i++)
        p1 *= x;
    for(int i=1 ; i<=x ; i++)
        p2 *= n;
    for(int i=1 ; i<=(n+n) ; i++)
        p3 *= x;
    for(int i=1 ; i<=(x+x) ; i++)
        p4 *= n;
    for(int i=1 ; i<=x ; i++)
        f1 *= i;
    for(int i=1 ; i<=n ; i++)
        f2 *= i;
    for(int i=1 ; i<=(x+n) ; i++)
        f3 *= i;
    r1 = (p1 * p2 * p3 * p4) / (f1 * f2 * f3);

    double sum =0 , r2;
    for(int i=1 ; i<=n ; i++)
    {
        double p5=1 , f4 =1 , f5=1  ;
        for(int j=1 ; j<=i ; j++)
            p5 *= (x+n);
        for(int j=1 ; j<=(x+2*i) ; j++)
            f4 *= j;
        for(int j=1 ; j<=(n+2*i) ; j++)
            f5 *= j;
        r2 = (p1 * p2 * p5) / (f4 * f5);
        sum += r2;
    }
    cout << r1*sum;
    return 0;
}
