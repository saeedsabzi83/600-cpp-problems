#include<iostream>
using namespace std;
int main()
{
    int x , n , bit ;
    cout << "please enter number ... ";
    cin >> x ;
    cout << "n : ";
    cin >> n ;
    bit = x ^ (1 << n) ;
    cout << "number bifor : " << x ;
    cout << "\nnumber after : " << bit ;
}
