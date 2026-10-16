#include <iostream>

using namespace std;

int main()
{
    int n  , i=2;
    float s1=1 , s2=5 , s3;
    cout << "n : ";
    cin >> n;
    cout << s1 << " , " << s2 << " , ";
    while(i != n)
    {
        s3 = (s2+s1)/2;
        s1 = s2;
        s2 = s3;
        i++;
        cout << s3 << " , ";
    }
    return 0;
}
