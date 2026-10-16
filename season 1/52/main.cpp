#include <iostream>

using namespace std;

int main()
{
    int s;
    cout << "score : " ;
    cin >> s ;
    if(s<0 || s>20)
        cout << "false";
    else
        {if(s<10)
            cout << "failed";
        else
            cout << "passed";}
    return 0;
}
