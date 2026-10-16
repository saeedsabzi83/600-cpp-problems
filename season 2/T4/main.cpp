#include <iostream>

using namespace std;
struct work
{
    int id;
    float salary ;
    float tax ;
    float pay ;
};

void input(work* w , int n);
void tax(work* w , int n);
void print(work* w , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout << "id worker : " << w[i].id << endl ;
        cout << "salary : " << w[i].salary << endl ;
        cout << "tax : " << w[i].tax << endl ;
        cout << "pay : " << w[i].pay << endl ;
    }
}
int main()
{
    int n ;
    cout << "n : " ;
    cin >> n ;
    work* w = new work[ n ];
    input(w,n);
    tax(w,n);
    print(w,n);
    return 0;
}

void input(work* w , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout << "id worker : " ;
        cin >> w[i].id ;
        cout << "salary : " ;
        cin >> w[i].salary;
    }
}

void tax(work* w , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        if(w[i].salary <= 400000)
            w[i].tax = 0 ;
        else if(w[i].salary > 400000 && w[i].salary <= 500000)
            w[i].tax = (w[i].salary - 400000) * 0.1 ;
        else if(w[i].salary > 500000 && w[i].salary <= 700000)
            w[i].tax = (w[i].salary - 500000) * 0.15 ;
        else if(w[i].salary > 700000)
            w[i].tax = (w[i].salary - 700000) * 0.17 ;
        w[i].pay = w[i].salary - w[i].tax ;
    }

}
