#include <iostream>

using namespace std;

int main()
{
    int n=1;
    do
    {
        int number , digit ;
        cout << "please enter number : ";
        cin >> number;
        while(number > 0)
        {
            digit = number % 10;
            if(digit == 0)
            {
                cout << "yes\n\n";
                break;
            }
            number /= 10;
        }
        if(number == 0)
            cout << "no\n\n";
        cout << "edome => 1 \nexit => -1 \n";
        cin >> n;
    }
    while(n != -1);
    return 0;
}
