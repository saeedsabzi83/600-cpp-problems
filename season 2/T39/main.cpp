#include<iostream>

using namespace std;

int main()
{

    int a ,t , suma , sume , m ;
    while(1)
    {
         cout << "somoreh hesob : ";
         cin >> a;
        if(a == -1)
            break;
        cout << "taroz : ";
        cin >> t;
        cout << "magmoe aghlom 1 moh : ";
        cin >> suma ;
        cout << "majmoe etebor dar yek moh : ";
        cin >> sume;
        cout << "saghf mojaz : "
        cin >> m;
        if( t+sume-suma > m)
        {
            cout << "shomoreh hesob : " << a ;
            cout << "\nsaghfe mojaz : " << m ;
            cout << "\ntaroz aval moh : " << t+sume-suma;
            cout << "creadit limited exceesded ";
        }
        cout << endl;
}
