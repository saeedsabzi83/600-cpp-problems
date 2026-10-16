#include <iostream>

using namespace std;

int main()
{
    float m=1;
    char t;
    while(true)
    {
        float sum = 0;
        cout << "masraf : ";
        cin >> m;
        if(m < 0)
        {
            cout << "good bye ";
            return 1;
        }
        cout << "type : ";
        cin >> t;
        switch(t)
        {
            case 'h' :
            case 'H' :
                sum = m/1000*500;
                break;
            case 'i' :
            case 'I' :
                if(m <= 4000000)
                    sum = m / 1000*750;
                else
                    sum = (m-4000000)*750*0.00025 + 4000000/1000*750;
                break;
            case 'e' :
            case 'E' :
                if(m<=2000000)
                    sum = m / 150 * 600;
                else
                    sum = (m-2000000)*600*.00002 + 2000000/150*600;
                break;
        }
        cout << "sum : " << sum;
    }
    return 0;
}
