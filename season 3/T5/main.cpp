#include <iostream>

using namespace std;
int w(int m, int n)
{
    int i=0;
    while(m > 0)
    {
        if(m % 10 == n)
            i++;
        m/=10;
    }
    return i;
}
int main()
{
    int m,n;
    cout << "m : ";
    cin >> m;
    cout << "n : ";
    cin >> n;
    int r = w(m,n);
    cout << "r : " << r;
    return 0;
}
