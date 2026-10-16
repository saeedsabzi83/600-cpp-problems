#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    for(int i=0 ; i<= 255 ; i++)
     cout << setw(1) << "( " << (char)i << " ) = " << i;
    return 0;
}
