#include <iostream>

using namespace std;
float r(float n1,float n2)
{
    return(n1*n2-n1/n2);
}
int main()
{
    float n1,n2;
    cout << "n1 : ";
    cin >> n1;
    cout << "n2 : ";
    cin >> n2;

    cout << r(n1,n2);    
    return 0;
}
