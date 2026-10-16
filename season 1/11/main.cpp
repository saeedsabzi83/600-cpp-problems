#include <iostream>
using namespace std;

int main() {
    float ghabl, jori, tavarom, baed;
    cout << "ghabl: ";
    cin >> ghabl;
    cout << "jori: ";
    cin >> jori;
    tavarom = (float)(jori - ghabl) / ghabl;
    baed = jori + jori * tavarom;
    cout << "tavarom: %" << tavarom * 100 << " \nbaed: " << baed;
}
// اشکال در کتاب در فرمول قیمت سال بعد هست قیمت سال بعد هست
// baed = jori + jori * tavarom;
