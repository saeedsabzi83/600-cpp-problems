#include <iostream>

using namespace std;

int main()
{
    int n,max=0,a;
    cout << "n : ";
    cin >> n;
    for(int i=1 ; i<= n ;i++)
    {
        cout << "nomreh : ";
        cin >> a;
        if(a > max)
            max =a;
    }
    cout << "max : " << max;
    return 0;
}
