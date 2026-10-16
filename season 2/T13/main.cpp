#include<iostream>
#include<math.h>
using namespace std;
int range(int y){
    int i=0;
    while(y != 0)
    {
        y /= 10 ;
        i++ ;
    }
    return i ;
}
int main()
{
    int x , sum=0;
    cout << "x : ";
    cin >> x ;
    int y = x , r = range(y);
    while(y != 0 )
    {
        sum += (y%10)*pow(10,r--);
        y /= 10 ;
    }
    sum /= 10 ;
    cout << "x : " << x << " ==> " << sum << " : " << (x == y ? "no": "yes");
}
