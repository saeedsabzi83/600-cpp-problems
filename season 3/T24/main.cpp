#include <iostream>

using namespace std;
int menu()
{
    int day;
    cout << "1. Saturday \n2. Sunday \n3. Monday \n4. Tuesday \n5. Wendsday \n6. Thursday \n7. Friday \n0. Exit\n\nday : ";
    cin >> day;
    return day;
}
int main()
{
    int day =1,smp=0;
    while(day != 0)
    {
        day = menu();
        if(day == 0)
        {
            cout << "end application.";
            break;
        }
        for(int i=1; i<=12; i++)
        {
            int sm=0;
            sm = smp % 7;
            cout << "\n----------------Month"<<i<<"----------------------\n";
            cout << "Sat     Sun     Mon     Tus     Wen     Thr     Fri\n";
            if(i!=1)
                for(int y=1; y<=smp%7; y++)
                    cout << "\t";
            if(i==1)
                for(int j=1; j<day; j++)
                {
                    sm++;
                    cout << "\t";
                }
            for(int z=1 ; z<= 31; z++)
                {
                    if(i>=7 && z == 31 || i ==12 && z == 30)
                        continue;
                    cout << z << "\t";
                    sm++;
                    if(sm % 7 == 0)
                        cout << endl;
                }
                cout << endl ;
            smp = sm;
        }
    }
    return 0;
}
