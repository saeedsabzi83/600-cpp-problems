#include <iostream>

using namespace std;

int main()
{
    int yearb , monthb , dayb ;
    cout << "year birthday : " ;
    cin >> yearb ;
    cout << "month birthday : " ;
    cin >> monthb ;
    cout << "day birthday : " ;
    cin >> dayb ;

    int yeart , montht , dayt ;
    cout << "year today : " ;
    cin >> yeart ;
    cout << "month today : " ;
    cin >> montht ;
    cout << "day today : " ;
    cin >> dayt ;

    int year , month , day ;
    if(dayb > dayt)
    {
        dayt += 30 ;
        montht-- ;
    }
    day = dayt - dayb ;

    if(monthb > montht)
    {
        montht += 12 ;
        yeart-- ;
    }
    month = montht - monthb ;

    if(yearb > yeart)
       {cout << "eror" ;
        return 0;}
    year = yeart - yearb ;

    cout << year << " " << month << " " << day ;

    cout << "\n-----------\nyear : " << year << "\nmonth : " << year*12 + month << "\nday : " << ((year*12)+month)*30 + day << "\nhour : " << (((year*12)+month)*30 + day)*24 << "\nminet : " << ((((year*12)+month)*30 + day)*24)*60 << "\ns : " << (((((year*12)+month)*30 + day)*24)*60)*60 ;
    return 0;
}
