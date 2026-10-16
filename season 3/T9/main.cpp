#include <iostream>
using namespace std;

int mypow(int n, int i)
{
    int p = 1;
    for(int j = 1; j <= i; j++)
        p *= n;
    return p;
}

int main()
{
    int n1, n2, n3, n4;
    for(int i = 1000; i <= 9999; i++)
    {
        int temp = i;
        n1 = temp % 10; temp /= 10;
        n2 = temp % 10; temp /= 10;
        n3 = temp % 10; temp /= 10;
        n4 = temp % 10;

        int left = mypow(n4,1) + mypow(n1,4);   // رقم اول و چهارم
        int right = mypow(n2,2) + mypow(n3,3);  // رقم دوم و سوم

        if(left == right)
            cout << i << " ";
    }
    return 0;
}
