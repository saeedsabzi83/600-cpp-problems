#include <iostream>

using namespace std;

int main()
{
    float n , p=4 , k=3 , j=-1 ;
    cout << "n : ";
    cin >> n ;
    for(int i=1 ; i<=n ; i++)
    {
        p += j*(float)4/k ;
        k += 2 ;
        j *= -1 ;
        cout << i << "\t" << p;
    }
    return 0;
}
