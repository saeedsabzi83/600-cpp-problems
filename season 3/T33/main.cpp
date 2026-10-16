#include <iostream>

using namespace std;
int SumEvenDigit(int n)
{
    if(n == 0)
        return 0;
    else if(n%2 != 0)
        return SumEvenDigit(n/10);
    else
        return (n%10) + SumEvenDigit(n/10);

}
int main()
{
    int n;
    cout << "n : " ;
    cin >> n;
    cout << "sum Even Digit is " << SumEvenDigit(n);
    return 0;
}
