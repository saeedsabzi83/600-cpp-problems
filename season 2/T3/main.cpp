#include <iostream>

using namespace std;

int main()
{
    int n ;
    cout << ">n : " ;
    cin >> n ;
    if (n==1)
        cout << 1 ;
    else if(n==2)
        cout << 1 << " " << 1 ;
    else
        {
            int m =2 , f3 , f2 = 1, f1 = 1;
            cout << 1 << " " << 1 << " ";
            while(m<n)
            {
                m=m+1 ;
                f3 = f2 + f1 ;
                cout << f3 << " " ;
                f1 = f2 ;
                f2 = f3 ;
            }
        }
    return 0;
}
