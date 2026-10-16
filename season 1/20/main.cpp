#include <iostream>

using namespace std;

int main()
{
    float R , R1 , R2 , R3 ;
    cout << "R1 :" ;
    cin >> R1 ;
    cout << "R2 :" ;
    cin >> R2 ;
    cout << "R3 :" ;
    cin >> R3 ;
    R = R1*R2*R3 / (R2*R3 + R1*R3 + R1*R2) ;
    cout << "R : "<< R;
    return 0;
}
