#include<iostream>
using namespace std;
struct worker{
    int id ;
    int year ;
    int m_w ;
    int base ;
    double pay;
};
int main()
{
    int n , woman = 0 , man = 0 , sum = 0 ;
    cout << "n : ";
    cin >> n ;
    worker w[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cout << "worker [ " << i+1 << "] \n id worker : " ;
        cin >> w[i].id ;
        cout << " year : ";
        cin >> w[i].year;
        cout << "m_w man=0  woman=1 : ";
        cin >> w[i].m_w;
        cout << "base (1-9) : ";
        cin >>w[i].base;
        cout << "pay : " ;
        cin >> w[i].pay ;
        sum += w[i].pay ;
        if(w[i].m_w == 0 )
            man++;
        else if(w[i].m_w == 1)
            woman++ ;
    }
    cout << "average pay : " << sum/n << "\n man : " << man << "\n woman : " << woman ; ;

}
