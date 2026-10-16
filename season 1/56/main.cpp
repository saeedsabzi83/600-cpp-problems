#include <iostream>

using namespace std;

int main()
{
    float s,h,t,m;
    cout << "hourly salary : " ;
    cin >> s ;
    cout << "working hours : " ;
    cin >> h ;
    t = (s*h)*0.1;
    m = (s*h) - t ;
    cout << "money : " << m ;
    cout << endl << "tax : " << t ;
    return 0;
}
