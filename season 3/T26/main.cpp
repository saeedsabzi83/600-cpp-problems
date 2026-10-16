#include <iostream>

using namespace std;
bool isTrain(int n)
{
    int i=1;
    while(i <= n)
    {
        if((i*(i+1)/2) == n)
            return 1;
        i++;
    }
    return 0;
}
int main()
{
    int n;
    cout << "number : ";
    cin >> n;
    if(isTrain(n))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
