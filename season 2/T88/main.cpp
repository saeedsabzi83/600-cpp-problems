#include <iostream>

using namespace std;

int main()
{
    int x,y;
    double pow=1;
    cout << "x : ";
    cin >> x ;
    cout << "y : ";
    cin >> y;
    if(y > 0)
    {
        for(int i=1 ; i<=y ; i++)
            pow *= x;
    }
    else
    {
        for(int i= y ; i<= -1 ; i++)
            pow *= (float)1/x;
    }
    cout << pow;
    return 0;
}
