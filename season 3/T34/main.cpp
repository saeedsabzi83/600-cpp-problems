#include <iostream>

using namespace std;
void print_10_xs(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=10; j++)
            cout << "X";
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "n : ";
    cin >> n;
    print_10_xs(n);
    return 0;
}
