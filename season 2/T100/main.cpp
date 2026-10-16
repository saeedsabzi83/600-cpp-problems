#include<iostream>

using namespace std;

int main()
{
    long int mony_house , tax , haz , sum , n;
    do
    {
        sum = 0;
        cout << "mony house : ";
        cin >> mony_house;
        cout << "tax : ";
        cin >> tax;
        cout << "hazine solone : ";
        cin >> haz;
        for(int i=1; i<= 10; i++)
            sum += mony_house * tax / 100 + haz;
        cout << "sum : " << sum;
        cout << "for exit cin -999 else cin 1 : ";
        cin >> n;
    }
    while(n != -999);


}