#include <iostream>

using namespace std;

int main()
{
    int age , n , number=0 ;
    char s;

    do
    {
        cout << "age : ";
        cin >> age;
        cout << "jensiat : ";
        cin >> s;

        if((age >= 18 && age <= 20) && (s =='m' || s=='M'))
            number++;

        cout << "for exit press -1 else yek celid dige : ";
        cin >> n;
    }
    while(n != -1);

    cout << number ;
    return 0;
}
