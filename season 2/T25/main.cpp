#include <iostream>

using namespace std;

int main()
{
    for(int i=1 ; i<=8 ; i++)
    {
        for(int j=9-i ; j>= 1 ; j--)
            cout << i << "\t";
        cout << endl ;
    }
    return 0;
}
