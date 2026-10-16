#include <iostream>

using namespace std;

int main()
{
    int n1,n2,y,temp;
    cout << "n1 : ";
    cin >> n1;
    cout << "n2 : ";
    cin >> n2;
    if(n1 > n2)
    {
        temp = n1;
        n1  = n2;
        n2 = temp;
    }
    for(int i=n1; i<=n2; i++)
    {
        if(i >=0)
            y=-3*i*i+5;
        else
            y = 3*i*i+5;
        cout << "y("<<i<<")= "<<y<<"\t";
    }
    return 0;
}
