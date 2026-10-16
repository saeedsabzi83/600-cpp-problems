#include <iostream>

using namespace std;

int main()
{
    int g , t , n ;
    cout << "ghemat kolo : ";
    cin >> g ;
    cout << "tavarom : " ;
    cin >> t ;
    cout << "sol : " ;
    cin >> n ;
    for(int i=0 ; i<n ; i++)
    {
        g += g*t/100;
        cout << i+1 << "\t" << g << endl ;
    }
    return 0;
}
