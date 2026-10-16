#include <iostream>

using namespace std;
char lower(char ch)
{
    return ((ch >= 'A' && ch <= 'Z')? ch | 32 : ch);
}
int main()
{
    char ch;
    cout << "char : ";
    cin >> ch;
    cout << lower(ch);
    return 0;
}
