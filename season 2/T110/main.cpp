#include <iostream>

using namespace std;

int main()
{
    int n , j=0 ;
    float a , sum=0 ;
    cout << "n : ";
    cin >> n;
    for(int i=1 ; i<= n ; i++)
    {
        cout << "a : ";
        cin >> a;
        if(a > 15)
        {
            sum += a;
            j++;
        }
    }
    cout << "av : " << (float)sum/j;
    return 0;
}
