#include <iostream>
#include <cstring>  // برای strcpy

using namespace std;

void read(int *h, int *mi)
{
    cout << "h : ";
    cin >> *h;
    cout << "mi : ";
    cin >> *mi;
}

void convert(int *h, char t[])
{
    if (*h >= 12)
    {
        if (*h > 12)
            *h -= 12;
        strcpy(t, "PM");
    }
    else
        strcpy(t, "AM");

    if (*h == 0)
        *h = 12;  // حالت نیمه‌شب
}

void print(int h, int mi, char t[])
{
    cout << h << " : ";
    if (mi < 10) cout << '0';  // صفر اضافه برای دقیقه
    cout << mi << " " << t << endl;
}

int main()
{
    int h, mi;
    char t[3];
    read(&h, &mi);
    convert(&h, t);
    print(h, mi, t);

    return 0;
}
