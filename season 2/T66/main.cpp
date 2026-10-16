#include <iostream>

using namespace std;

int main()
{
    int n;
    do
    {
        cout << "n : ";
        cin >> n;
    }
    while(n<1 || n >80);
    for(int i =0 ;i<n ;i++)
        {for(int j=0 ; j<n ; j++)
            cout << "* ";
        cout << endl;}
    return 0;
}
