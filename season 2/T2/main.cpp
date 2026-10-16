#include <iostream>
using namespace std ;
void input(int* a , int n);
void isperfect(int* a , int n);

int main()
{
    int n ;
    cout << "please enter number : " ;
    cin >> n ;
    int* a = new int[n] ;
    input(a , n);
    isperfect(a , n);
}

void input(int* a , int n){
    for(int i=0 ; i<n ; i++)
    {
        cout << "n " << i+1 << " : ";
        cin >> a[i];
    }
}

void isperfect(int* a , int n)
{
    int c;
    for(int i=0 ; i<n ; i++)
    {
        int sum = 0 ;
        for(int j=1 ; j<a[i] ; j++)
        {
            if(a[i]%j==0)
                sum += j ;
        }
        if(a[i]==sum)
            cout << "---------------\n" << a[i] << " is perfect" << "\n---------------\n";
        else
            cout << "---------------\n"<<a[i] << " is not perfect " << "\n---------------\n";
        if(i==n-1)
            {
                cout << "finsh " ;
                break;
            }
        cout << "\ncountinue ?  \n 1 -> yes \n 0 -> no \n" ;
        cin >> c ;
        if(c == 0)
            break;
        if(c==1)
            continue;
        if(c != 0 || c != 1)
        {
            cout << "eror !" ;
            break;
        }
    }
}
