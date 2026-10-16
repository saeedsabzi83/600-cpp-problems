#include <iostream>

using namespace std;

int main()
{
    for(int i=20 ; i>0 ; i--)
    {
        for(int j=1 ; j< i ; j++)
            cout << "  ";
        for(int z=1 ; z <=14 ; z++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}
