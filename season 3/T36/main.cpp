#include <iostream>

using namespace std;
int x=1;
void useLocal()
{
    int x=25;
    cout << "\n-------Local-------\nx = " << x << endl << "x = " << ++x << endl << "-------------------\n";
}
void usestaticlocal()
{
    static int x = 50;
    cout << "\n------static------------\nx = " << x << endl << "x = " << ++x << endl << "--------------------\n";
}
void useGlobal( )
{
    cout << "\n-----------Global---------\nx = " << x << endl;
    x = x*10;
    cout << "x = " << x << "\n--------------------\n";
}
int main()
{
    int x=5;
    cout << "x = " << x << endl;
    {
        int x = 7;
        cout << "x = " << x << endl;
    }
    cout << "x = " << x << endl;
    useLocal();
    usestaticlocal();
    useGlobal();
    useLocal();
    usestaticlocal();
    useGlobal();
    cout << "x = " << x;
    return 0;
}
