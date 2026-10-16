#include <iostream>

using namespace std;
bool isprime(int a)
{
    for(int i=2;i<a;i++)
        if(a % i == 0)
            return 0;
    return 1;
}
int main()
{
    int n=1;
    while(n%2 !=0)
    {
        cout << "adad zog: ";
        cin >> n;
    }
    for(int i=3 ; i<=n/2 ; i++)
    {
        if(i%2 != 0 && (n-i)%2 != 0 && isprime(i)&& isprime(n-i))
            cout << n-i << " + " << i << " = " << n << endl;
    }
    return 0;
}
