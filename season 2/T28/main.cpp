#include <iostream>

using namespace std;

int main()
{
    char ch ;
    bool loop = 1 ;
    while(loop)
    {
        cout << "enter laghab : ";
        cin >> ch ;
        switch (ch)
        {
            case 'b':
            case 'B':
                cout << "lady \n";
                break;

            case 'd':
            case 'D':
                cout << "miss \n";
                break;
                
            case 'p':
            case 'P':
                cout << "professor \n";
                break;          

            case 'a':
            case 'A':
                cout << "mr \n";
                break;

            case 'j':
            case 'J':
                cout << "excellency \n";
                break;

            case 'm':
            case 'M':
                cout << "wife \n";
                break;         
            default:
                cout << "exit !";
                loop = 0 ;
        }
    }
    return 0;
}
