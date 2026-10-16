#include <iostream>

using namespace std;
int incDec(int a , int b)
{
    a++;
    b--;
}
int incDec1(int &a , int &b)
{
    a++;
    b--;
}
int main()
{
    int a,b;
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    incDec(a,b);
    cout << "\n----------inDec------------\n a : " << a << "\n b : " << b << "\n---------------------------\n\n";
    incDec1(a,b);
    cout << "\n----------inDec1------------\n a : " << a << "\n b : " << b << "\n---------------------------\n";

    return 0;
}
