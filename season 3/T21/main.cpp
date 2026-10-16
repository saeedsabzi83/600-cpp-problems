#include <iostream>
using namespace std;
int main()
{
    int h,m;
    float sum = 0;
    while( true )
    {
        float sum0 = 0;
        cout << "hour : ";
        cin >> h;
        if(h == -1)
            break;
        cout << "minute : ";
        cin >> m;
        if(h >= 3 )
            sum0 = 2 + (h-3)*0.5 + (float)m/60*0.5;
        else
            sum0 += 2;
        cout << "sum : " << sum0 << endl;
        sum += sum0;
    }
    cout << "sum : " << sum;

}
