#include<iostream>

using namespace std;
int main()
{

    for(int i=1000; i <= 9999; i++)
    {
        int temp = i , digit , p=1;
        while(temp > 0 )
        {
            digit = temp % 10;
            p *= digit;
            temp /= 10;
        }
        float sum = 0;
        for(int j=1; j<p; j++)
        {
            if(p%j == 0)
                sum += j;
        }
        if(sum == p && p != 0)
            cout << i << "\t";
    }
}