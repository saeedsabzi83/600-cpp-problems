#include<iostream>
using namespace std;
bool even(int n)
{
    return ((n ^ 1) == (n + 1));
}
int main()
{
    int n;
    cout << "number is ... ";
    cin >> n ;
    if(even(n))
        cout << n << " is even";
    else
        cout << n << " is`n even ";
}
