#include <iostream>

using namespace std;

int main()
{
    int n1,n2,max1;
    cout<< "n1:";
    cin>>n1;
    cout<< "n2:";
    cin>>n2;
    (n1>n2)?cout<<n1<<" is larger than "<< n2 : cout<<"";
    (n1<n2)?cout<<n2<<" is larger than "<< n1 : cout<<"";
    (n1==n2)?cout<<"These number are equal " : cout<<"" ;
    return 0;
}
