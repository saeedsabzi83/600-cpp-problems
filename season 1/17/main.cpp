#include<iostream>
using namespace std;
int main()
{
    float age , ghad , wazn ;
    double size_kamar , size_kot , size_koloh ;
    int y1 , y2;
    cout<<"ghad : ";
    cin>> ghad ;
    cout<< " wazn : ";
    cin >> wazn ;
    cout<< "age : ";
    cin >> age;
    y1 = (age > 28) ? (age-28)/2 : 0 ;
    y2 = (age > 30) ? (age-30)/2 : 0 ;
    size_kamar = (wazn/5.7)+0.1*y1;
    size_kot = (wazn*ghad)+1.0/8*y2;
    size_koloh = (wazn * 2.9)/ghad;
    cout<<"size kot : " << size_kot<<"\tsize koloh : "<< size_koloh<<"\tsize kamar : "<< size_kamar;
    return 0 ;
}
