#include <iostream>

using namespace std;

int main()
{
    int k,x,y;
    do
    {
        cout << "k : ";
        cin >> k;
    }
    while(k <= 0 || k >= 1000);

    for(x = k+1; x <= 2*k; x++)
    {
        y = k* x / (x - k);
        if((x*y) / (y+x) == k)
            cout << "1 / " << k << " = 1 / " << x << " +  1 / " << y << endl;
    }
    return 0;
}
