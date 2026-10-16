#include <iostream>
#include<math.h>

using namespace std;
double s(double v,double t)
{
    return (33 - (((10*sqrt(v)-v+10.5)*(33-t))/23.1));
}
int main()
{
    double v,t;
    cout << "v : ";
    cin >> v;
    cout << "t : ";
    cin >> t;
    double w=s(v,t);
    cout << "w : " << w;
    return 0;
}
