#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n : ";
    cin >> n;
    int sd , m;
    cout << "sod solone : ";
    cin >> sd;
    cout << "sarmoye : ";
    cin >> m;

    for(int i=1 ; i<=n ;i++)
    {
        m = m + sd*m /100;
        cout << "m : " << m << endl;
    }
    return 0;
}
