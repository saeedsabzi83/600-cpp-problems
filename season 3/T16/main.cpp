#include <iostream>

using namespace std;
float a(float n1 , float n2 , float n3)
{
    return((n1+n2+n3)/3);
}
int main()
{
    float n1,n2,n3;
    cout << "n1 : ";
    cin >> n1;
    cout << "n2 : ";
    cin >> n2;
    cout << "n3 : ";
    cin >> n3;

    cout << "average : " << a(n1,n2,n3);

    return 0;
}
