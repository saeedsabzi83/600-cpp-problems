#include <iostream>

using namespace std;

int main()
{
    cout << "for Exit x->0  , y->0 \n";
    int x=1 , y=1 ;
    while(x !=0 , y != 0){
        int sum = 0 ;
        cout << "x : ";
        cin >> x ;
        cout << "y : ";
        cin >> y ;
        for(int i=1 ; i<=x ; i++)
            sum += y ;
        cout << "x * y : " << sum <<"\n-----------------------\n";
    }
    return 0;
}
