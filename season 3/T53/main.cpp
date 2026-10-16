#include <iostream>

using namespace std;
int F(int i)
{
    if (i == 1)
        return 2;
    return 2*F(i-1)+1;
}
int main()
{
    for(int i=1 ; i<=15 ; i++)
    {
        cout << F(i) << "\t";
    }
    return 0;
}
