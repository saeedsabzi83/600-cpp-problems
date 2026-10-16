#include <iostream>
#include<cmath>
using namespace std;
int f(int x)
{
    return (5*pow(x,2))- (3*x)+4;
}
float f(float x)
{
    return (5*pow(x,2))- (3*x)+4;
}
int main()
{
    int x1;
    float x2;
    cout << "x1 : ";
    cin >> x1;
    cout << "x2 : ";
    cin >> x2;
    cout << "int : " << f(x1) << endl << "float : " << f(x2);
    return 0;
}
