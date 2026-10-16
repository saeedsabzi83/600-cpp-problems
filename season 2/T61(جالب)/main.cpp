#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    cout << "enter a statement : ";
    char ch;
    while((ch = cin.get()) != EOF)
        if(ch >='0' && ch <= '9')
            count++;
    cout << "count is " << count;
    return 0;
}
