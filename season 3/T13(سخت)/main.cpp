#include <iostream>
#include <conio.h>
using namespace std;

int accept(char c)
{
    if((c >= '0') && (c <= '9'))
        return 1;
    else 
        return 0;
}

int chrtoint(char c)
{
    if((c >= 48) && (c <= 57))
        return c-48;
    else
        return 0;
}
int main()
{
    unsigned long int sum = 0;
    char ch , temp ='1';
    while(1)
    {
        cout << "enter a number : ";
        while((ch = getch()) != 13)
        {
            if(accept(ch))
            {
                temp = ch;
                cout << ch;
                sum += chrtoint(ch);
            }
        }
        cout << "\nsum = " << sum << endl;
        if((sum % 3 == 0) && (chrtoint(temp) % 5 == 0))
            cout << "---------yes-----------\n";
        else
            cout << "---------No------------\n";
        cout << "do you want to continue(y/n)?";
        cin >> ch;
        if((ch == 'N') || (ch == 'n'))
            break;
        cout << endl;
    }
    return 0;
}
