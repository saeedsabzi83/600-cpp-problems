#include <iostream>

using namespace std;
long calculate(float r, long b)
{
    return (b + (b*r/100));
}
int main()
{
    long balance , newbalance;
    float rate;
    int count =0;
    cout << "balance = ";
    cin >> balance;
    cout << "rate = ";
    cin >> rate;
    cout << "new balance = ";
    cin >> newbalance;
    long salbalance = balance;
    while(salbalance < newbalance)
    {
         salbalance = calculate(rate,salbalance);
        count++;
    }
    cout << "count : " << count;
    return 0;
}
