#include<iostream>
using namespace std;
int main()
{
    int n , m , sum =0 ;
    cout << "n : " ;
    cin >> n ;
    for(int i=0 ; i<n ; i++)
    {
        cout << "m[ " << i+1 << " ] = " ;
        cin >> m ;
        sum += m ;
    }
    cout << "averag : " << (float)sum / n ;
}
