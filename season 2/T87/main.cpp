#include <iostream>

using namespace std;

int main()
{
    int hoghogh , nobime, pay , bime=0 ;
    double  tax , darsadtax;
    cout << "hoghogh kormand : ";
    cin >> hoghogh;
    cout << "no bime : ";
    cin >> nobime;
    cout << "darsad tax : ";
    cin >> darsadtax;

    tax = hoghogh * (darsadtax/100);

    bime = (nobime == 1) ? (double)hoghogh * (7/100) : bime ;
    bime = (nobime == 2) ? (double)hoghogh * (8.5/100) : bime ;
    bime = (nobime == 3) ? (double)hoghogh * (10/100) : bime ;



    pay = hoghogh - tax - bime;

    cout << "hoghogh : " << hoghogh << "\ttax : " << tax << "\tbime : " << bime << "\thoghogh kholes : " << pay;
    return 0;
}
