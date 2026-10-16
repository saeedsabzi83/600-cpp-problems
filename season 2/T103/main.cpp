#include <iostream>

using namespace std;

int main()
{
    char a;
    cout << "char : ";
    cin >> a;
    switch (a)
    {
    case 'A':
    case 'B':
    case 'C':
    case 'D':
        cout << "big charater";
        break;

    case 'a':
    case 'b':
    case 'e':
    case 'd':
        cout << "litter charater";
        break;
    
    case '1':
    case '2':
    case '3':
    case '4':
        cout << "A figare";
        break;
    
    default:
        cout << "unknown charater";
        break;
    }
    return 0;
}
