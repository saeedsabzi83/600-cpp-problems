#include <iostream>

using namespace std;

int main()
{
    float x1,x2,x3,y1,y2,y3,m1,m2;
    cout << "A(...,...) >plaese enter x1 : ";
    cin >> x1;
    cout << "A(" << x1 << ",...) >plaese enter y1 : ";
    cin >> y1;
    cout << "A(" << x1 << "," << y1 << ")\n----------\n";

    cout << "B(...,...) >plaese enter x2 : ";
    cin >> x2;
    cout << "B(" <<  x2 << ",...) >plaese enter y2 : ";
    cin >> y2;
    cout << "B(" << x2 << "," << y2 << ")\n----------\n";

    cout << "C(...,...) >plaese enter x3 : ";
    cin >> x3;
    cout << "C(" << x3 << ",...) >plaese enter y3 : ";
    cin >> y3;
    cout << "C(" <<  x3 << "," << y3 << ")\n----------\n";

    m1 = (y2-y1) / (x2-x1);
    m2 = (y3-y2) / (x3-x2);

    if(m1 == m2)
        cout << "Y - " << y1 << " = " << m1 << " (x - " << x1 << " )";
    return 0;
}
