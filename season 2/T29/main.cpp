#include <iostream>

using namespace std;

int main()
{
    long int pay ;
    cout << "pey car : ";
    cin >> pay ;
    for(int i=1 ; i<=10 ; i++)
    {
        cout << "pay in year " << i << " : " ;
        pay -= pay * 0.2 ;
        cout << pay  << endl ;
    }
    return 0;
}
