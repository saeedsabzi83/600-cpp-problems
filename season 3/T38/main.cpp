#include <iostream>

using namespace std;
int calculate(int c, int r)
{
    return c*r /100;
}
int main()
{
    long cost;
    float rate;
    cout << "cost : ";
    cin >> cost;
    cout << "rate : ";
    cin >> rate;
    cout << "Result is " << calculate(cost,rate);
    return 0;
}
