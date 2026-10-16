#include <iostream>
#include<cmath>
using namespace std;

float sum(int a,int b,int c)
{
    return (a+b+c);
}

float area(int a,int b,int c)
{
    float p = (a+b+c)/2;
    float z = sqrt(p*(p-a)*(p-b)*(p-c));
    return z;
}
int main()
{
    float a,b,c;
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << "c : ";
    cin >> c;

    cout << "masohat : " << area(a,b,c)
    << endl << "mohit : " << sum(a,b,c);

    return 0;
}
