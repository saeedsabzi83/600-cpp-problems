#include <iostream>

using namespace std;
char selectgrade(int g)
{
    if(g >= 80)
        return 'A';
    if(g >= 60)
        return 'B';
    if(g >= 50)
        return 'C';
    else
        return 'F';
}
int main()
{
    int grade = -1;
    while(grade < 0 || grade > 100)
    {
        cout << "Enter grade : ";
        cin >> grade;
    }
    cout << "Grade is " << selectgrade(grade);
    return 0;
}
