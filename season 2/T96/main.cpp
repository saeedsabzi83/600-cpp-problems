#include <iostream>

using namespace std;

int main()
{
    int c=0, digit, temp;
    for(int i = 1000; i <= 9999; i++)
    {
        temp = i;
        while(temp > 0)
        {
            digit = temp % 10;
            if(digit == 0)
                c++;
            temp /= 10;
        }
    }
    cout << "zero : " << c;
    return 0;
}
