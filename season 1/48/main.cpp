#include <iostream>

using namespace std;

int main()
{
    int x , y , z;
    cout << "x : ";
    cin >> x;
    cout << "y : ";
    cin >> y ;
    z = x++ * y/x++ ;
    cout << "z : " << z;
    return 0;
}
