#include <iostream>

using namespace std;
bool isprime(int i);
int main()
{
    int n1 , n2 , temp;
    cout << "n1 : ";
    cin >> n1;
    cout << "n2 : ";
    cin >> n2;

    if(n1 > n2)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    for(int i = n1+1; i < n2; i++)
    {
        if(isprime(i))
            cout << i << "\t";
    }
    return 0;
}

bool isprime(int i)
{
    if(i <= 1)
        return 0;
    for(int j=2 ; j < i/2; j++)
        if(i%j == 0)
            return 0;
    return 1;
}