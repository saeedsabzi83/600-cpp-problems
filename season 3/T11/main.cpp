#include <iostream>
using namespace std;

int sumdigit(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    do
    {
        cout << "n : ";
        cin >> n;
        if(n < 0)
            cout << "please enter a non-negative number\n";
    }
    while(n < 0);

    int a = n;
    while(a >= 10)
    {
        a = sumdigit(a);
    }

    cout << "Result = " << a << endl;
    return 0;
}
