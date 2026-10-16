#include <iostream>

using namespace std;

int main()
{
    int n , d_k , t ;
    double g_k , sum1 = 0 , sum2 = 0 , sum3 = 0 , sum4 = 0;
    double f1 , f2 , f3 , f4 ;
    cout << "tedod aghlom forosh : ";
    cin >> n;
    for(int i=0 ; i<n ; i++)
    {
        cout << "daraje kolo : " ;
        cin >> d_k;
        cout << "gheimat kolo : ";
        cin >> g_k ;
        cout << "tedod : ";
        cin >> t ;
        switch (d_k)
        {
        case 1 :  sum1 += t * g_k ; break;
        case 2 :  sum2 += t * g_k ; break;
        case 3 :  sum3 += t * g_k ; break;
        case 4 :  sum4 += t * g_k ; break;
        }
    }
    if(sum1 <= 100000)
        f1 = sum1 * 0.6 ;
    else if(sum1 > 100000 && sum1 <= 200000)
        f1 = sum1 * 0.7 ;
    else 
        f1 = sum1 * 0.1 ;
    if(sum2 <= 100000)
        f2 = sum2 * 0.04 ;
    else 
        f2 = sum2 * 0.06 ;
    f3 = sum3 * 0.412 ;
    f4 = sum4 * 0.05 ;
    cout << "\n======================\n";
    cout << "sum1 : " << sum1 << "\tf1 : " << f1 <<endl; 
    cout << "sum2 : " << sum2 << "\tf2 : " << f2 <<endl; 
    cout << "sum3 : " << sum3 << "\tf3 : " << f3 <<endl; 
    cout << "sum4 : " << sum4 << "\tf4 : " << f4 <<endl; 
    return 0;
}
