#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n,k=0;
    cout << "n : ";
    cin >> n;
    int spac = n - 1;
    for(int i=1 ; i <= n ; i++)
    {
        for(int j = spac ; j > 0 ; j--)
            cout << " ";
        //cout << endl;
        spac--;
        for(int z=1 ; z<=i; z++)
        {
            if(k < 10)
                cout <<  setw(3) << ++k ;
            else 
                cout <<  setw(3) << ++k ;
        }
        cout << endl;
    }
}