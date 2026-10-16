#include <iostream>

using namespace std;
int fibo(int n)
{
    if(n == 1)
        return 1;
    if(n == 2)
        return 1;
    return (fibo(n-2) + fibo(n-1));
}
int main()
{
    int n;
    cout << "n : ";
    cin >> n;
    for(int i=1 ; i<=n ; i++)
        cout << fibo(i) << "\t";
    return 0;
}
