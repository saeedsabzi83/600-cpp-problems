#include <iostream>

using namespace std;

int main()
{
    int n , digit,n1,n2,n9,n4;
    for(int i=1000 ; i <= 9999 ; i++){
        n = i;
        n9=n4=n1=n2=0;
        while(n > 0){
            digit = n % 10;
            if(digit == 9)
                n9++;
            if(digit == 4)
                n4++;
            if(digit == 1)
                n1++;
            if(digit == 2)
                n2++;
           if(digit == 9 && digit == 4 && digit == 1 && digit == 2)
               break;
           n /= 10;
        }
        if(n9 == 1 && n4 == 1  && n2 == 1 && n1 == 1 )
            cout << i << "\t";
    }
    return 0;
}
