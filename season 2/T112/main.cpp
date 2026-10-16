#include <iostream>

using namespace std;

int main()
{
    float sum=0 , m=1 , s=1 , i=2;
    while(m >= 1e-4)
    {
        m *= 1.0/i;
        sum += s*m;
        s = -1*s;
        i++;
    }
    cout << "sum : " << sum;
    return 0;
}
