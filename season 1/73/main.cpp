#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,n4,n5,max,min;
    cout << "n1 : ";
    cin >> n1 ;
    cout << "n2 : ";
    cin >> n2 ;
    cout << "n3 : ";
    cin >> n3 ;
    cout << "n4 : ";
    cin >> n4 ;
    cout << "n5 : ";
    cin >> n5 ;

//-------------------------------------

   max = min = n1 ;
   max = (max < n2)? n2 : max ;
   max = (max < n3)? n3 : max ;
   max = (max < n4)? n4 : max ;
   max = (max < n5)? n5 : max ;
   min = (n2 > min)? min : n1 ;
   min = (n3 > min)? min : n2 ;
   min = (n4 > min)? min : n3 ;
   min = (n5 > min)? min : n4 ;
   cout << "max : " << max << endl << "min : " << min ;

}
