#include <iostream>

using namespace std;

template <class T>
T fx(T n, T m)
    {
        return (n*m-n/m);
    }
int main()
{
    int n1,n2;
    cout << "n1 : ";
    cin >> n1;
    cout << "n2 : ";
    cin >> n2;
    cout << fx(n1,n2) << endl;

    float a,b;
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << fx(a,b);
    return 0;
}
