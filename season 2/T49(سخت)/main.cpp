#include<iostream>

using namespace std;

int main()
{
    int n,c,y,i,j,k,m,h,po,pow;
    cout << "n : ";
    cin >> n;
    y = n / 3;
    k=n+3;
    for(int i=1; i<=y+1; i++)
        cout << " ";
    for(int i=1 ; i<=y ; i++)
        cout << "*";
    cout << "\n";
    for(int i=1 ; i<=y ; i++)
    {
        for(int j=1 ; j<= y-i ; j++)
            cout << " ";
        cout << "*";
        for(c = n+2 ; c<= y+k ; c++)
            cout << " ";
        if(i==n) 
            cout << " ";
        else 
            cout << "*";
        cout << endl;
        k=k+2;
    }
    for(po=1 ; po <= n/2+1;po++)
    {
        cout << "*";
        for(pow=1 ; pow<=n-1;pow++)
            cout << " ";
        cout << "*" << endl;
    }
    m=1;
    for(i=1;i<=y;i++)
    {
        for(c=y+2;c<= y+m;c++)
            cout <<  " ";
        cout << " ";
        if(i==y)
        {
            cout << " ";
            for(h=1;h<=y ; h++)
                cout << "*";
        }
        else
            cout << "*";
        for(j=1;j<=2*y-2*i+y;j++)
            cout << " ";
        if(i==y)
            cout << "";
        else 
            cout << "*";
        cout << endl;
        m=m+1;
    }
}