#include<iostream>
using namespace std;
int main()
{
    for(int i=2 ; i<= 14 ; i += 4)
    {
        for(int j = i ; j<=i+10 ; j += 2 )
            cout << j << "\t";
        cout << endl;
    }
}
