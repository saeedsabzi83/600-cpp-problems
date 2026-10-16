#include <iostream>

using namespace std;
void Cale_Grade(float m,float p)
{
    cout << "final : " << m*0.4 + p*0.6;
}
int main()
{
    float m,p;
    cout << "nomreh mionterm : ";
    cin >> m;
    cout << "nomreh poianterm : ";
    cin >> p;
    Cale_Grade(m,p);
    return 0;
}
