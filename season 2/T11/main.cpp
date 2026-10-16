#include <iostream>
#include<cmath>
using namespace std;
double sum_makhraj(int x , int i)
{
        int sum_m = 0 ;
        for(int j=1 ; j<=i ; j++)
            sum_m += j * pow(x , j) ;
        return sum_m;
}
int main()
{
    int x , s=1 ;
    cout << "x : ";
    cin >> x ;
    double sum = 0  ;
    for(int i=1 ; i<=x ; i++)
        {double a = 1/sum_makhraj(x,i)) ;
         sum += s * a ;
         s *= -1 ; }
    cout << "sum = " << sum ;
    return 0;
}
