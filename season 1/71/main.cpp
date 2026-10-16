#include <iostream>

using namespace std;

int main()
{
    int s,b,h;
    cout << "small rule : " ;
    cin >> s ;
    cout << "big rule : " ;
    cin >> b ;
    cout << "height : " ;
    cin >> h ;
    s = (h*(b+s))/2 ;
    cout << "The area of ​​the trapezoid : " << s ;

    return 0;
}
