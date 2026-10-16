#include <iostream>

using namespace std;

int main()
{
    int n1,n2,sum=0;
    cout << "n1 : ";
    cin >> n1;
    sum += n1;
    while(true)
    {
        cout << "n2 : ";
        cin >> n2;
        if(n2 < n1)
            break;
        sum += n2;
        n1 = n2;
    }
    cout << "sum : " << sum;
    return 0;
}
