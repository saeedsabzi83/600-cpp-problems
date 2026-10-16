#include<iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout << "day : ";
        cin >> n;
        if(n<0 || n>365)
            cout << "please enter day true !\n";
    } while (n<0 || n>365);

//---------------------------------------------------------

    int m=1,temp=n,d;
    if(n<=186){
        while(temp>31)
            {
                temp -= 31;
                m++;
            }
        d = n - (m-1)*31;
    }
    else{
        while(temp>30)
            {
                temp -= 31;
                m++;
            }
        d = (n - 186) - (m-7)*30;
    }

//------------------------------------------------------------

    string f,mo;
    switch (m)
    {
    case 1:
        mo = "farvardin";
        f = "bahor";
        break;
    case 2:
        mo = "ordibehesht";
        f = "bahor";
        break;
    case 3:
        mo = "khordad";
        f = "bahor";
        break;
    
    case 4:
        mo = "thir";
        f = "tobeston";
        break;
    case 5:
        mo = "mordad";
        f = "tobeston";
        break;
    case 6:
        mo = "shahrivar";
        f = "tobeston";
        break;

    case 7:
        mo = "mehr";
        f = "poiez";
        break;
    case 8:
        mo = "obon";
        f = "poiez";
        break;
    case 9:
        mo = "ozar";
        f = "poiez";
        break;

    case 10 :
        mo = "dey";
        f = "zemeston";
        break;
    case 11 :
        mo = "bahman";
        f = "zemeston";
        break;
    case 12 :
        mo = "esfand";
        f = "zemeston";
        break;
    }
    cout << "fasl : " << f << "\nmounth : " << mo << "\nday : " << d;
} 
