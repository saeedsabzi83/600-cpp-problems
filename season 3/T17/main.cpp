#include <iostream>

using namespace std;
void p(int n)
{
    if(n == 0)
        return ;
    else
    {
        cout << n << "\t";
        n--;
        p(n);
    }
}
int main()
{
    int n;
    cout << "n : ";
    cin >> n;
    p(n); 
    return 0;
}
