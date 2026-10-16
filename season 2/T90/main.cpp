#include <iostream>

using namespace std;

int main()
{
    int up=64,down=1;
    for(int i=1 ; i<=7 ; i++)
    {
        cout << down << "\t" << up << "\n";
        down *= 2;
        up /= 2;
    }
    return 0;
}
