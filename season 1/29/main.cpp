#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3;
    int sum,zarb,max,min;
    float average;

    cout << "n1 :";
    cin >> n1;
    cout<< "n2 :";
    cin >> n2;
    cout<< "n3 :";
    cin >> n3;

    sum = n1+n2+n3;
    zarb = n1*n2*n3;
    average = (float)(n1+n2+n3)/3;
    max=(n1>n2)? n1 : n2 ;
    max = (n3 > max)? n3 : max;
    min = (n1<n2)? n1 : n2 ;
    min = (n3< min)? n3 : min ;

    cout<< "n1*n2*n3 : "<<zarb;
    cout << "\nn1+n2+n3 : "<<sum;
    cout << "\naverage : "<<average;
    cout<< "\nmin : "<<min ;
    cout<< "\nmax :  "<< max;
    return 0;
}
