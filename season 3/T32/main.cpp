#include <iostream>

using namespace std;
int mulQ5(int n)
{
    if(n == 0)
        return 1;
    else if(n%10 <= 5)
        return mulQ5(n/10);
    else
        return(n%10 * mulQ5(n/10));
}
int main()
{
    int n;
    cout << "n : ";
    cin >> n;
    cout << "hosel : " << mulQ5(n);
    return 0;
}
