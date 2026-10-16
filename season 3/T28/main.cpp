#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int x,y;
    cout << "x : ";
    cin >> x;
    cout << "y : ";
    cin >> y;
    cout << "Result is " << sqrt(pow(fabs(x-y),fabs(y)));
    return 0;
}
