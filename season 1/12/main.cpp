#include<iostream>
using namespace std ;
int main ()
{
    int kormand;
    long int soliane ;
    cout<< " kormand : ";
    cin >> kormand ;
    soliane = (750000+(750000*13.5/100)) * 12 ;
    cout<< " azofi : "<< soliane - 750000*12 ;
}
