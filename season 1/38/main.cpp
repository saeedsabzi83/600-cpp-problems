#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int r ;
    float g , s , h ;
    cout << "r : " ;
    cin >> r ;
    g = 2 * r ;
    s = M_PI * r * r ;
    h = 2 * r * M_PI ;

    cout << "g : " << g ;
    cout << "\ns: " << s ;
    cout << "\nh : " << h ;
    return 0;
}
