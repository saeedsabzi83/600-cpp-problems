#include <iostream>
using namespace std;

// تابع ورودی
void read(float &f, float &inch) {
    cout << "f : ";
    cin >> f;
    cout << "inch : ";
    cin >> inch;
}

// تابع محاسبه
void calculate(float f, float inch, float &fm, float &fcm, float &inchm, float &inchcm) {
    fm = f * 0.3048;            // فوت به متر
    fcm = fm * 100;             // متر به سانتی‌متر
    inchm = (inch / 12) * 0.3048; // اینچ به متر
    inchcm = inchm * 100;       // متر به سانتی‌متر
}

// تابع خروجی
void write(float fm, float fcm, float inchm, float inchcm) {
    cout << "fm : " << fm
         << endl << "fcm : " << fcm
         << endl << "inchm : " << inchm
         << endl << "inchcm : " << inchcm
         << endl;
}

int main() {
    float f, inch, fcm, fm, inchm, inchcm;

    read(f, inch);
    calculate(f, inch, fm, fcm, inchm, inchcm);
    write(fm, fcm, inchm, inchcm);

    return 0;
}
