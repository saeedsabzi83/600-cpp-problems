#include <iostream>

using namespace std;

int main()
{
    int n , sum=0;
    cout << "n : ";
    cin >> n;
    for(int i=1 ; i<n ; i++)
    {
        if(n>i && i%2==1)
        {
            sum += i;
            cout << i << " ";
        }


        if(sum == n)
        {
            cout << " : " << sum;
            cout << "\nyes";
            return 0;
        }
    }
    cout << "\nno";
    return 0;
}
