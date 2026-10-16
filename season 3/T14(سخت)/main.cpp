#include <iostream>

using namespace std;
int digit_count(int,int);
int main()
{
    int number , digit;
    cout << "enter a digit : ";
    cin >> digit;
    cout << "number is ";
    for(number =1 ; number <= 100 ; number++)
    {
        if((digit_count(number , digit) > 0) && (digit_count(number * number , digit) > 0) && (digit_count(number * number * number , digit) > 0))
            cout << number << "   ";
    }
    return 0;
}
 int digit_count(int number , int digit)
 {
    int count = 0;
    while(number)
    {
        if(number % 10 == digit)
            count++;
        number /= 10;
    }
    return count;
 }
