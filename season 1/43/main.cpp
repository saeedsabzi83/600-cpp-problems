#include<iostream>
using namespace std;
int main()
{
    double p , f ;
    cout<< "please enter pages : ";
    cin >> p;
    cout << "size_of flash : ";
    cin >> f ;
    p = p * 30 * 80 ;
    f = f * 1024 * 1024 * 1024 ;
    cout << f/p ;
}
