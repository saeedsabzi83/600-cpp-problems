#include <iostream>

using namespace std;

int main()
{
    float A4 , pen , t , money ;
    cout << "gheimat khpdkar : ";
    cin >> pen ;
    cout << " gheimat A4 : ";
    cin >> A4 ;
    cout << " tavarom : ";
    cin >> t ;
    t = t/100 ;
    money = 150 * pen * t + 50 * A4 * t ;
    cout << "mizan afzoyesh :" << money ;
    return 0;
}
