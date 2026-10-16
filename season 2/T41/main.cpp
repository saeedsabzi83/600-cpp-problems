#include <iostream>

using namespace std;

int main()
{
    int n , sum =0 , s = 1;
    cout << " n : ";
    cin >> n;
    for(int i=1 ; i<= n ; i++)
    {
        cout << i ;
        if(i != n && s == 1)
            cout << " + ";
        else if(i != n && s == -1)
            cout << " - ";
        else
            cout << " = ";
        sum += i * s;
        s *= -1;
    }
    cout << sum;
    return 0;
}
