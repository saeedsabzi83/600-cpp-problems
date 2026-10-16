#include<iostream>
using namespace std;
int main()
{
    int n , m , bit ;
    cout << "please enter number : ";
    cin >> n ;
    cout << "enter nth but to check (0-31) : ";
    cin >> m ;
    bit = (n >> m) & 1 ;
    cout << m << " bit in " << n << " : " << bit ;
}
