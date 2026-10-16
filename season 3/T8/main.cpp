#include <iostream>

using namespace std;
int fact(int i)
{
    if(i == 0)
        return 1;
    return (i*fact(i-1));
}
int main()
{
    int n1,n2,n3;
    for(int i=100 ; i<=999;i++)
    {
        int temp = i;
        n1 = temp%10;
        temp /= 10;
        n2 = temp%10;
        temp /= 10;
        n3 = temp % 10;
        if(i == fact(n3)+fact(n2)+fact(n1))
            cout << i << "\t";
    }
    return 0;
}
