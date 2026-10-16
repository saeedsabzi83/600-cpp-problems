#include <iostream>

using namespace std;
double r(int a,int b, int c)
{
    return(a+ (double)b/c);
}
int main()
{
    int a,b,c;
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << "c : ";
    cin >> c;
    cout << r(a,b,c);
    return 0;
    
}
