#include <iostream>

using namespace std;

int main()
{
    int n,sum1=0, sum2=0,i=0,j=0,digit;
    cout << "please enter number : ";
    cin >> n;
    cout << " number     digit\n";
    cout << "========   =======\n";
    while(n > 0)
    {
        digit = n % 10 ;
        if(digit % 2 == 1)
            {sum1 += digit;
            i++;}
        else
        {
            sum2 += digit;
            j++;
        }
        cout << n << "\t      " << digit << endl;
        n /= 10;
    }
    cout << "\naverag fard : " << sum1 / i<< endl << "averag zog : " << sum2 / j ;

    return 0;
}
