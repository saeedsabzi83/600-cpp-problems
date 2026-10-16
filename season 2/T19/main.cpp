#include <iostream>

using namespace std;

int main()
{
    int p1 , p2 , sum1 = 0 , sum2 = 0 ;
    cout << "ghechi => 1 \n sang => 2 \n koghaz =>3 \n";
    for(int i=0 ; i<5 ; i++){
    cout << "pleyer1 : ";
    cin >> p1 ;
    cout << "pleyer2 : ";
    cin >> p2 ;
    if((p1 == 3 && p2 == 2) || (p1 == 2 && p2 == 1) || (p1 == 1 && p2 == 3))
            sum1++;
    if((p1 == 3 && p2 == 1) || (p1 == 1 && p2 == 2) || (p1 == 2 && p2 == 3))
        sum2++;
    cout << "=============\n";}
    cout << "pleyer 1 : " << sum1 << "\t" << "pleyer2 : " << sum2 ;
    if(sum1 > sum2)
        cout << "\npleyer1 winer";
    if(sum1 < sum2)
        cout << "\npleyer2 winer";
    return 0;
}
