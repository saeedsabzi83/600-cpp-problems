#include <iostream>

using namespace std;
void digit(int);
int main()
{
    int n ;
    cout << "Please enter a four-digit number : " ;
    cin >> n ;
    if(n < 1000 || n > 9999)
        cout << "please enter a number true !" ;
    else
        digit(n);
    return 0;
}

void digit(int n)
{
    int d[4] , i=0 ;
    while(n>0)
    {
        d[i] = n % 10 ;
        n/=10 ;
        i++;
    }
    if(d[3]*d[0]==d[1]*d[2])
        cout<<"yes";
    else
        cout<<"no";
}
