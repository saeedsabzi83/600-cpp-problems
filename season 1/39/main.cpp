#include <iostream>

using namespace std;

int main()
{
    float year , x , day,m;
    cout << "enter year : " ;
    cin >> year ;
    day = 365.25 * year ;
    m = day / 30 ;
    x = 365.25 * year * 24 * 60 * 60 ;
    cout << x << "secounds ";
    cout << endl << day << "day";
    cout << endl << m << "mounth";
    return 0;
}
