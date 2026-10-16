#include<iostream>
using namespace std ;
int sum_range(int x){
    int sum=0;
    while(x>0)
    {
        sum += x%10;
        x /= 10 ;
    }
    return sum;
}
int main()
{
    int n ;
    cout << " n : ";
    cin >> n ;
    int a[n];
    for(int i=1 ; i<=n ; i++)
    {
        cout << "a[ " << i << "] = " ;
        cin >> a[i];
    }
    for(int j=1 ; j<=n ; j++)
        if(sum_range(a[j]) % 9 == 0)
            cout << a[j] << "\t";
}
