#include <iostream>

using namespace std;

int main()
{
    int h=0,p=0,d;
    float sumtax=0,sumk=0;
    while(true)
    {
        float nk=0,m=0,k=0;
        do
        {
            cout << "hours start : ";
            cin >> h;
            if(h == -99)
              {
                cout << "sumtax : " << sumtax << "\nsumk : " << sumk;
                return 1;
              }  
        }
        while(h<0 || h>23);

        cout << "pals : ";
        cin >> p;

        cout << "day : ";
        cin >>d;

        if(h==23 || h<=8)
            nk = p*0.5*46;
        else if(d == 7)
            nk = p * 0.75*46;
        else nk = p*46;
        m = nk*0.04;
        k = nk - m;

        cout << "nk : " << nk << "\n"
        << "k : " << k << "\n"
        << "m : " << m << "\n\n";

        sumtax += m;
        sumk += k;
    }
        
}
