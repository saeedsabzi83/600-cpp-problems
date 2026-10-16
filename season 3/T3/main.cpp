#include <iostream>

using namespace std;
double g=6.673e-8;

double s(double m1,double m2)
    {
        return (m1*m2*g);
    }

double m(double d)
    {
        return (d*d);
    }

int main()
{
    double m1,m2,d;
    cout << "m1 : ";
    cin >> m1;
    cout << "m2 : ";
    cin >> m2;
    cout << "d : ";
    cin >>d;
    double f=s(m1,m2)/m(d);
    cout << "f :" << f;

    return 0;
}
