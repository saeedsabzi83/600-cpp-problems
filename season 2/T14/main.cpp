#include<iostream>
using namespace std;
int main()
{
    int m , n , temp , sum;
    cout << "> m ^ n\n";
    cout << "m : ";
    cin >> m ;
    cout << "n : ";
    cin >> n ;
    temp = m ;
    for(int i=1 ; i<n ; i++)
    {
        sum=0 ;
        for(int j=1 ; j<=m ; j++)
            sum += temp ;
        temp = sum ;
    }
    cout << m << " ^ " << n << " : " << sum ;
}
