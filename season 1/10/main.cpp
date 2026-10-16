#include<iostream>
using namespace std;
int main()
{
    int money,b,m,s;
    cout<<"money:";
    cin>>money;
    m = money * 0.1 ;
    b = money * 0.07 ;
    s = money - m - b ;
    cout<<"moliat:"<<m<<"\nbime:"<<b<<"\nhoghogh:"<<s;
}
