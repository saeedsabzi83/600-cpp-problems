#include <iostream>

using namespace std;

int main()
{
    int n1 , n2 ,n3 ;
    cout << "n1 : ";
    cin >> n1 ;
    cout << "n2 : ";
    cin >> n2 ;
    cout << "n3 : ";
    cin >> n3;
    if(n1>n2)
        swap(n1,n2);
    if(n1>n3)
        swap(n1,n3);
    if(n2,n3)
        swap(n2,n3);
    cout << n1 <<" " << n2 << " " << n3 ;
    return 0;
}
