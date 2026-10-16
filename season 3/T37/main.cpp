#include <iostream>

using namespace std;
int boxVolume(int x=1 , int y=1 , int z=1);

int main()
{
    cout << "boxVolume() = " << boxVolume() << endl;
    cout << "boxVolume(10) = " << boxVolume(10) << endl;
    cout << "boxVolume(10,5) = " << boxVolume(10,5) << endl;
    cout << "boxVolume(10,5,2) = " << boxVolume(10,5,2) << endl;
    return 0;
}
int boxVolume(int x, int y, int z)
{
   return x * y * z;
}
