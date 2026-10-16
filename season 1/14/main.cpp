#include <iostream>

using namespace std;

int main()
{
    int x,a=0,b=0,y;
    cout<<"x:";
    cin>>x;
    for(int i=0;i<x;i++)
    {
        a+=31;
        b+=17;
    }
    y=a-b+5;
    cout<<"y:"<<y;
    return 0;
}
