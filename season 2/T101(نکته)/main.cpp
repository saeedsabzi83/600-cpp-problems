#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double n , e = 10e-10;
    double s;
    cout << "n : ";
    cin >> n;
    s = sqrt(n);
    do{
       s = sqrt(s+n);
      }
    while(fabs(s-sqrt(s+n)) >= e);
    cout << "s : " << s;
    return 0;
}

//تابع fabs عمل قدر مطلق را انجام می دهد
// 10e-10  => 10^-10 