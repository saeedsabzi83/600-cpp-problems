#include <iostream>

using namespace std;

int sumrange(int i);

int main()
{
    int n1 , n2 , n3 , temp;
    cout << "n1 : ";
    cin >> n1;
    cout << "n2 : ";
    cin >> n2;
    cout << "n3 : ";
    cin >> n3;

    if(n1 > n2)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    for(int i=n1+1; i<n2; i++)
    {
        if(sumrange(i) == n3)
            cout << i << "\t";
    }
    return 0;
}

int sumrange(int i)
{
    int digit , sum=0;
    while(i > 0)
    {
        digit = i%10;
        sum += digit;
        i /= 10;
    }
    return sum;
}