#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3,max1;
    cout<<"n1:";
    cin>>n1;
    cout<<"n2:";
    cin>>n2;
    cout<<"n3:";
    cin>>n3;
    max1=(n1>n2)? n1:n2;
    max1=(n3>max1)?n3:max1;
    cout<<"maximum in "<<n1<<","<<n2<<","<<n3<<" : "<<max1;
    return 0;
}
