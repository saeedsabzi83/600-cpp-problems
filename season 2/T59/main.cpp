#include <iostream>

using namespace std;

int main()
{
    int n , digit;
    for(int i=100 ; i <= 999 ; i++){
        n = i;
        while(n > 0){
           digit = n % 10;
           if(digit == 1 || digit == 4 || digit == 8)
           {
               cout << i << "\t";
               break;
           }
           n /= 10;
        }
    }
    return 0;
}
