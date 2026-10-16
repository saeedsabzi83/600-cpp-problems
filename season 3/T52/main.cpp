#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    float r;
    for(int i=5; i<=90; i+=5)
    {
        r = 3.1415*i/180;
        cout << "sin(" << i << ") = " << floor(sin(r)*1000+0.5)/1000 << "\t\tcos(" << i << ") = " << floor(cos(r)*1000+0.5)/1000 << "\t\ttan(" << i << ") = " << floor(tan(r)*1000+0.5)/1000 << endl;
    }
    return 0;
}
