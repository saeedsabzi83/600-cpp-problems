#include <iostream>

using namespace std;

int main()
{
    int n , a=0 , b;
    cout << "n : ";
    cin >> n;
    for(int i=1 ; i<=n ; i++)
    {
        cout << "n" << i << " : ";
        cin >> b;
        if(b > 10 && b < 15)
            a++;
    }
    cout << "a : " << a;

    return 0;
}
