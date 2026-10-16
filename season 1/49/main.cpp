#include <iostream>

using namespace std;

int main()
{
    cout << "ch : ";
    char ch;
    cin >> ch ;
    ch = (ch >= 'a' && ch <='z')? ch-32 : ch ;
    cout << "ch : " << ch ;
    return 0;
}
