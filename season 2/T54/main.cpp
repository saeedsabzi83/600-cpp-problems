#include <iostream>

using namespace std;

int main()
{
    int n;
    float h;
    do
    {
        int  h_s , h , hoghog_ezofekar=0 , hoghog_soati , hoghog;
        cout << "hoghog soati : ";
        cin >> h_s;
        cout << "soat korkad : ";
        cin >> h;
        if(h > 40)
        {
            hoghog_ezofekar = (h-40)*1.5*h_s;
            hoghog_soati = 40 * h_s ;
        }
        else
        {
            hoghog_soati = 40 * h_s ;
        }
        hoghog = hoghog_ezofekar + hoghog_soati ;
        cout << "hoghog : " << hoghog;
        cout << "\nedome -> 1 \nexit -> 0 \nn: ";
        cin >> n;
    }
    while(n);
    return 0;
}
