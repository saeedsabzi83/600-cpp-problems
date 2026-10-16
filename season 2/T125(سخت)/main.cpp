#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    double xn=0 , xp=3 , xm;
    do
    {
        xm = (xp + xn) / 2;
        if(xm + exp(xm) - 5 > 0)
            xp = xm;
        else
            xn = xm;
    }
    while((xp - xn) > 1e-5);
    cout << "result is " << xm;
    return 0;
}
