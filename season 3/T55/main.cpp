#include <iostream>

using namespace std;
int suface(int b,int h)
{
    return b*h/2;
}
float suface(float b1, float h1)
{
    return b1*h1/2;
}
int main()
{
    int b,h;
    float b1,h1;
    cout << "b : ";
    cin >> b;
    cout << "h : ";
    cin >> h;
    cout << suface(b,h) << endl;
    cout << "b1 : ";
    cin >> b1;
    cout << "h1 : ";
    cin >> h1;
    cout << suface(b1,h1);
    return 0;
}
