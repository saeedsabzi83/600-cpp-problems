#include <iostream>
#include <iomanip>
using namespace std;
struct worker
{
    float id ;
    float h ;
    float s_h ;
    float ov = 0 ;
    float salary = 0 ;
};
int input(worker w[] , int size)
{
    int n = 1  , i = 1 ;
    while(n == 1)
    {
        cout << "id worker : " ;
        cin >> w[i].id ;
        cout << "house work : " ;
        cin >> w[i].h ;
        cout << "house salary : " ;
        cin >> w[i].s_h ;
        cout << "continue ? \n yes -> 1 \n no -> 0 \n" ;
        cin >> n ;
        i++ ;
        if(i>size)
            {cout << "memory is full !" ;
            break;}
    }
    return i ;
}

void salary(worker w[] , int size)
{
    for(int i=1 ; i<size ; i++)
    {
        if(w[i].h > 40 )
            {w[i].ov = (w[i].h - 40) * (1.5 * w[i].s_h) ;
            w[i].salary = w[i].ov + 40*w[i].s_h ;}
        else
            w[i].salary = w[i].h * w[i].s_h ;
    }
}
void print(worker w[] , int size)
{
    for(int i=1 ; i<size ; i++)
    {
        cout  << "id : " << w[i].id ;
        cout  << setw(10) << "ov : " << w[i].ov ;
        cout  << setw(15) << "salary : " << w[i].salary <<"\n";
    }
}
int main()
{
    int size ;
    worker w[100];
    size = input(w,100) ;
    salary(w,size) ;
    print(w,size) ;
    return 0;
}
