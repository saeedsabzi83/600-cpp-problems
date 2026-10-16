#include <iostream>

using namespace std;
void calculateTax(int s)
{
    long tax;
    if(s <= 483000 )
        tax =0;
    else if(s <= 600000)
        tax = (s-483001) * 0.1;
    else if(s <= 1000000)
        tax = (600000-483001)*0.1 + (s-600001) * 0.15;
    else if(s <= 2000000)
        tax = (600000-483001)*0.1 + (1000000-600001)*0.15 + (s-2000001) * 0.2;
    else
        tax = (600000-483001)*0.1 + (1000000-600001)*0.15 + (2000000-1000000) * 0.2 + (s - 2000001) * 0.3;
    cout << "salary is " << s << endl << "tax is " << tax;
}
int main()
{
    long salary;
    cout << "salary : " ;
    cin >> salary;
    calculateTax(salary);
    return 0;
}
