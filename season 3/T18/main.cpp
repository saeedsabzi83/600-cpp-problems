#include <iostream>

using namespace std;

float pow(float n1,int n2)
{
    float p=1;
    if(n2 > 0)
    {
        for(int i=1 ;i<=n2; i++)
            p *= n1;
        return p;
    }

    else if(n2 < 0)
    {
        for(int i = 1; i <= -n2; i++)
            p *= 1/n1;
        return p;
    }

    else
        return 1;
}
int main()
{
    double n1;
    cout << "n1 : ";
    cin >> n1;
    int n2;
    cout << "n2 : ";
    cin >> n2;
    cout << pow(n1,n2);

    return 0;
}
