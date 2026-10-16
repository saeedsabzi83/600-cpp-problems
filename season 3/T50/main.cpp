#include <iostream>

using namespace std;
void convert(int n, int b)
{
    if(n > 0)
    {
        convert(n/b,b);
        cout << n%b;
    }
}
int main()
{
    int n,b;
    cout << "n : ";
    cin >> n;
    while(b >= 10)
    {
        cout << "b : ";
        cin >> b;
    }
    convert(n,b);
    return 0;
}
