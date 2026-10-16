#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int x , y , z=0 , a;
    cout << "x : ";
    cin >> x ;
    a = x ;
    cout << "y : ";
    cin >> y ;
    if(y>x)
        swap(x,y);
    while(x >= y)
    {
        x -= y ;
        z++ ;
    }
    cout << a << " / " << y << " = " << z ;
    return 0;
}
