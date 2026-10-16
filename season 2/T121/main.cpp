#include <iostream>

using namespace std;

int main()
{
    float  n,a=0,b=1,p=0;
    cout << "n : ";
    cin >> n;
    for(int i=1 ; i<=n ; i++)
        {
            if(i % 2 == 0)
                a = a+2;
            else
                b = b+2;
            p += (a/b);
        }
        cout <<2* p;
    return 0;
}
