#include <iostream>

using namespace std;

int main()
{
    int n1 , n2 ;
    cout << "n1 : " ;
    cin >> n1 ;
    cout << "n2 : " ;
    cin >> n2 ;
    cout << "-----------------------\n" ;
    cout << "n1 : " << n1 << "\tn2 : " << n2 ;
    n1 ^= n2 ;
    n2 ^= n1 ;
    n1 ^= n2 ;
    cout << "\nn1 : " << n1 << "\tn2 : " << n2 ;
    return 0;
}
