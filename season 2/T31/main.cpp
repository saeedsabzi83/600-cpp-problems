#include <iostream>

using namespace std;

int main()
{
    for(int i=0 ; i <= 2 ; i++)
        for(int j=0 ; j <= 5 ; j++)
            for(int k=0 ; k <= 10 ; k++)
                for(int m=0 ; m <= 20 ; m++)
                    if(i*500 + j*200 + k*100 + m*50 == 1000)
                    {
                        cout << 500 << " : " << i << endl << 200 << " : " << j << endl << 100 << " : " << k << endl << 50 << " : " << m << endl;
                        cout << "\n===================\n";
                    }
    return 0;
}
