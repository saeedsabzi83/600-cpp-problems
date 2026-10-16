#include <iostream>

using namespace std;

int main()
{
    char ch ;
    cout << "ch : ";
    cin >> ch ;
    (ch >= '0' && ch <= '9') ? cout << "yes" : cout << "no";
    return 0;
}
