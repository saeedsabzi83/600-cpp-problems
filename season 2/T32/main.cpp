#include<iostream>
using namespace std ;
int main()
{
    int m , g , loop = 1;
    while(loop == 1)
    {
        cout << "masofat : " ;
        cin >> m ;
        cout << "mizon masraf : " ;
        cin >> g ;
        cout << "masofat / masraf = " << (float)m/g << endl ;
        cout << " exit => 0 , continue => 1 " << endl ;
        cin >> loop ;
    }
}
