#include<iostream>
using namespace std;
struct student
{
    int id ;
    float av ;
};
void input(student* s , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout << "id student : " ;
        cin >> s[i].id;
        cout << "av student : " ;
        cin >> s[i].av;
    }
}
void sortarr(student* s , int n)
{
    for(int i=0 ; i<n ; i++)
        for(int j=0 ; j < n ; j++)
        {
            if(s[i].av > s[j].av)
                swap(s[i],s[j]);
        }
}
void print(student* s , int n)
{
    for(int i=0 ; i<n ; i++)
        {
            cout << "id : " << s[i].id << endl ;
            cout << "av : " << s[i].av << endl ;
        }
}
int main()
{
    int n ;
    cout << ">please enter number student : ";
    cin >> n ;
    student* s = new student[n] ;
    input(s,n);
    sortarr(s,n) ;
    cout << s[1].id << "\t" << s[1].av ;

}
