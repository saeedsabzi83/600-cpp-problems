#include <iostream>

using namespace std;

int main()
{
    float x1,x2,x3,x4,y1,y2,y3,y4,temp;

    cout << "A(...,...) >please enter x1 : ";
    cin >> x1;
    cout << "A(" << x1 << ",...) >please enter y1 : ";
    cin >> y1;
    cout << "A(" << x1 << "," << y1 << ") \n------------\n"; 

    cout << "B(...,...) >please enter x2 : ";
    cin >> x2;
    cout << "B(" << x2 << ",...) >please enter y2 : ";
    cin >> y2;
    cout << "B(" << x2 << "," << y2 << ") \n------------\n"; 

    cout << "C(...,...) >please enter x3 : ";
    cin >> x3;
    cout << "C(" << x3 << ",...) >please enter y3 : ";
    cin >> y3;
    cout << "C(" << x3 << "," << y3 << ") \n------------\n"; 

    cout << "D(...,...) >please enter x4 : ";
    cin >> x4;
    cout << "D(" << x4 << ",...) >please enter y4 : ";
    cin >> y4;
    cout << "D(" << x4 << "," << y4 << ") \n------------\n"; 

    if(x1 > x2)
    {
        temp = x1 ;
        x1 = x2 ;
        x2 = temp ;
    }

    if(y1 > y2)
    {
        temp = y1 ;
        y1 = y2 ;
        y2 = temp ;
    }

    if(x3 > x4)
    {
        temp = x3 ;
        x3 = x4 ;
        x4 = temp ;
    }

    if(y3 > y4)
    {
        temp = y3 ;
        y3 = y4 ;
        y4 = temp ;
    }

    int xl = (x1 > x3) ? x1 : x3;
    int xr = (x2 < x4) ? x2 : x4;
    int yd = (y1 > y3) ? y1 : y3;
    int yt = (y2 < y4) ? y2 : y4;

    if(xl < xr && yd < yt)
        cout << "area : " << (xr - xl) * (yt - yd);
    else
        cout << "no area ";
    return 0;
}
