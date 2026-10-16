#include <iostream>
#include<math.h>

using namespace std;
float derivate(float n, float a, float x)
{
    if(n < 1)
        return exp(a * x);
    else
        return (a*derivate(n-1,a,x));
}
int main()
{
    float a,x,n;
    cout << "a : ";
    cin >> a;
    cout << "x : ";
    cin >> x;
    cout << "n : ";
    cin >> n;
    cout << derivate(n,a,x);
    return 0;
}
