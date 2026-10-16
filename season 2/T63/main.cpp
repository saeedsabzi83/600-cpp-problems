#include<iostream>
using namespace std;
int main()
{
    for(int i=100 ; i<= 500 ; i += 50)
    {
        for(int j = i ; j<=i+500 ; j += 100 )
            cout << j << "\t";
        cout << endl;
    }
}
