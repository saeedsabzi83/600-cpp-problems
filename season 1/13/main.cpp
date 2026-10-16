#include <iostream>

using namespace std;

int main()
{
    int a , n1 , n2 , sum = 0 ;

    cout << "enter integer 0 - 99 :";
    cin >> a ;
    if( a<0 || a>100)
        cout<<" :\\ ";
    else
            n1 = a / 10 ;
            n2 = a % 10 ;
            sum = n1 + n2 ;
            cout << n1 <<"\t" << n2 << "\nsum : "<< sum;
    return 0;
}
