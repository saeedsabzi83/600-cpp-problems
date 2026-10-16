#include <iostream>

using namespace std;

int main()
{
    int n1 , n2;
    cout << "number 1 : ";
    cin >> n1;
    cout << "number 2 : ";
    cin >> n2;
    for(int i=1 ; i<=n1 ; i++)
        if(n1%i == 0 && n2%i == 0)
            cout << i << "\t";
    return 0;
}
