#include <iostream>

using namespace std;

int main()
{
    int n;
    while(true){
        cout << "n : ";
        cin >> n;
        switch(n)
        {
            case (1) : cout << "farvardin"; break;
            case (2) : cout << "ordibehesht"; break;
            case (3) : cout << "khordad"; break;
            case (4) : cout << "tir" ; break;
            case (5) : cout << "mordad"; break;
            case (6) : cout << "shrivar"; break;
            case (7) : cout << "mahr"; break;
            case (8) : cout << "aban"; break;
            case (9) : cout << "azar"; break;
            case (10): cout << "dey"; break;
            case (11): cout << "bahman"; break;
            case (12): cout << "esfand"; break;
            default  : return 0;
        }
        cout << "\n";
    }
    return 0;
}
