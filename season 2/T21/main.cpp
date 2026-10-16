#include <iostream>

using namespace std;

int main()
{
    char ch ;
    while(ch != 'e' || ch != 'E')
    {
        cout << "please enter char : ";
        cin >> ch ;
        if(ch == 'w' || ch == 'W')
            cout << "your love white color\n";
        if(ch == 'r' || ch == 'R')
            cout << "your love red color\n";
        if(ch == 'y' || ch == 'Y')
            cout << "your love yellow color\n";
        if(ch == 'b' || ch == 'B')
            cout << "your love blue color\n";
        if(ch == 'g' || ch == 'G')
            cout << "your love green color\n";
        if(ch == 'e' || ch == 'E')
            {cout << "\n fenish\n";
            break;}
    }
    return 0;
}
