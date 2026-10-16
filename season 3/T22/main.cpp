#include <iostream>

using namespace std;
int menu();
void print1();
void print2();
void print3();
void print4();
int main()
{
    int i;
    while(i != 5)
    {
        i= menu();
        switch(i)
        {
            case 1 :
                print1();
                break;
            case 2 :
                print2();
                break;
            case 3 :
                print3();
                break;
            case 4 :
                print4();
                break;
        }
    }
    return 0;
}

int menu()
{
    int in;
    cout << " 1 -> (0-99) d1 = d2 \n 2 -> (100-999) d2 = 0 \n 3 -> (100-999) d1+d2 < d3 \n 4 -> (1000-9999) d1=d4 , d2=d3 \n 5 -> exit \n";
    cin >> in;
    return in;
}

void print1()
{
    int x=0;
    for(int i=10; i<=99; i++)
    {
        if (i % 10 == i/10)
        {
            cout << i << " ";
            x++;
        }
    }
    cout << " | tedod adod = " << x << "\n--------------------\n";
}

void print2()
{
    int x=0;
    for(int i=100; i<=999; i++)
    {
        if(i/10%10 == 0)
        {
            cout << i << " ";
            x++;
        }
    }
    cout << " | tedod adod = " << x << "\n--------------------\n";
}

void print3()
{
    int x=0;
    for(int i=100; i<1000; i++)
    {
        if(( i%10 + i/10%10 ) < i/100)
        {
            cout << i << " ";
            x++;
        }
    }
    cout << " | tedod adod = " << x << "\n--------------------\n";
}

void print4()
{
    int x=0;
    for(int i=1000; i<10000; i++)
    {
        if(i%10 == i/1000 && i/10%10 == i/100%10)
        {
            cout << i << " ";
            x++;
        }
    }
    cout << " | tedod adod = " << x << "\n--------------------\n";
}
