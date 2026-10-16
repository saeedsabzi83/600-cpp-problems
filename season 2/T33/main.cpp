#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout << " n = " ;
    cin >> n ;
    cout << "I\tT*10\tI*100\tI*1000\n";
    for(int i=1 ; i<=8 ; i++)
        cout << i << "\t" << i*10 << "\t" << i*100 << "\t" << i*1000 << endl ;
}

