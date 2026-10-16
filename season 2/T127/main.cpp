#include <iostream>

using namespace std;

int main()
{
    int ch;
    for(ch = 'A'; ch<='Z'; ch++)
        cout << (char)ch << " = " << (char)(ch+32) << endl;
    return 0;
}
