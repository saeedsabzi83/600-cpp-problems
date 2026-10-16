#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "n : ";
    cin >>n;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n-i-1 ; j++)
            cout << " ";
        for (size_t z = 0 ;z < i+1 ;z++)
        {
            if(z==0 || z==i)
                cout << "* ";
            else
                cout << "o ";
        }
        
        cout << endl;
    }

}
