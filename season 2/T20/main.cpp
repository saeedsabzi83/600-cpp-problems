#include<iostream>
using namespace std;
int sum_range(int i)
{
    int sum = 0 ;
    while(i>0)
    {
        sum += (i%10) ;
        i /= 10 ;
    }
    return sum ;
}
int main()
{
    for(int i=1000 ; i<= 1100 ; i++)
    {
        if(sum_range(i) % 9 == 0)
            cout << i << "\t" ;
    }
}