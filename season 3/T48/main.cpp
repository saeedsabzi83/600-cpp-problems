#include <iostream>

using namespace std;
float loge(float x)
{
    float y = (x-1)/(1+x);
    float ln1 =0 , ln2 = 2*y;
    float k=1;
    float p=y;
    while(k<10000)
    {
        ln1 = ln2;
        k += 2;
        p = p * y * y;
        ln2 += 2/k*p;
    }
    return ln2;
}
float log(int x, int k)
{
    return loge(x)/loge(k);
}
int main()
{
    int x,k;
    cout << "x : ";
    cin >> x;
    cout << "k : ";
    cin >> k;
    cout << log(x,k);
    return 0;
}
