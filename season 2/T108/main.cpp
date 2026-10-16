#include <iostream>

using namespace std;

int main()
{
    char a;
    cout << "char : ";
    cin >> a;
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'y' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' || a == 'Y')
        cout << "Sound char" << endl;
    else if(a >= 'a' && a <='z' || a >= 'A' && a <= 'Z')
        cout << "no sound" << endl;
    else if(a >= '0' && a <='9')
        cout  << "Digit char" << endl;
    else
        cout << "others" << endl;
    return 0;
}
