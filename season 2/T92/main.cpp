#include <iostream>

using namespace std;

int main()
{
    int n,s,min1=99999,min2=99999,min3=99999;
    cout << "n : " ;
    cin >> n;
    for(int i=1 ; i<=n ; i++)
    {
        cout << "kormand " << i << " : ";
        cin >> s;

        if(s<min1)
        {
            min3 = min2 ;
            min2 = min1 ;
            min1 = s;
        }

        else if(s < min2)
        {
            min3 = min2 ;
            min2 = s ;
        }

        else if(s < min1)
            min3 = s;
    }

    cout << "3 min : " << min1 << " " << min2 << " " << min3;
    return 0;
}
