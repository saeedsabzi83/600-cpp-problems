#include <iostream>

using namespace std;

int main()
{
    int a ,b,n;
    cout << "n : ";
    cin >> n;

    while(n >= 0)
    {

        do
        {
            cout << "a : ";
            cin >> a;
        } while (a <= 1 && a >= 3);
        n -= a;
        cout << "n : " << n << endl;
                if(n<=0)
        {
            cout << "b win";
            return 0;
        }
        do
        {
            cout << "b : ";
            cin >> b;
        } while (b <=1 && b >= 3);
        n -= b;

        if(n<=0)
        {
            cout << "a win";
            return 0;
        }
        cout << "n : " << n << endl;
    }
    return 0;
}
