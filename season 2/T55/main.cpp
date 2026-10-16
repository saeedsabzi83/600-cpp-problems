#include <iostream>

using namespace std;

int main()
{
    cout << "&& : \n" << "true && true : " << (true && true) << endl << "true && false : " << (true && false) << endl << "false && true : " << (false && true) << endl << "false && false : " << (false && false) << endl;
    cout << "|| : \n" << "true || true : " << (true || true) << endl << "true || false : " << (true || false) << endl << "false || true : " << (false || true) << endl << "false || false : " << (false || false) << endl;
    cout << "! : \n" << "!false : " << (!false) << endl << "!true : " << (!true);
    return 0;
}
