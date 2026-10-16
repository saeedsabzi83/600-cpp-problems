#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3,n4,n5,max,min;
    cout << "n1 : " ;
    cin >> n1 ;
    cout<< "n2 : ";
    cin >> n2 ;
    cout<< "n3 : ";
    cin >> n3;
    cout<< "n4 : ";
    cin >> n4 ;
    cout<< "n5 : ";
    cin >> n5;

    //max
    max = ( n1 > n2 ) ? n1 : n2 ;
    max = ( n3 > max ) ? n3 : max ;
    max = ( n4 > max ) ? n4 : max ;
    max = ( n5 > max ) ? n5 : max ;

    //min
    min = ( n1 < n2 ) ? n1 : n2 ;
    min = ( n3 < min ) ? n3 : min ;
    min = ( n4 < min ) ? n4 : min ;
    min = ( n5 < min ) ? n5 : min ;

    cout << "min : "<<min << "\nmax : "<< max;
    return 0;
}
