#include <iostream>

using namespace std;

double calculateDay(int y,int m,int d)
{
    return (y*365.25 + m*30 + d);
}

double calculatehour(int y, int m, int d)
{
    return calculateDay(y,m,d)*24;
}

double calculateMinute(int y, int m, int d)
{
    return calculatehour(y,m,d)*60;
}

double calculateSecond(int y, int m, int d)
{
    return calculateMinute(y,m,d)*60;
}
int main()
{
    int year,month,day;
    cout << "year : ";
    cin >>year;
    cout << "month : ";
    cin >> month;
    cout << "day : ";
    cin >> day;
    cout << endl<< "Day is " << calculateDay(year,month,day);
    cout << endl << "Hour is " << calculatehour(year,month,day);
    cout << endl << "Minute is " << calculateMinute(year,month,day);
    cout << endl << "Second is " << calculateSecond(year,month,day);
    return 0;
}
