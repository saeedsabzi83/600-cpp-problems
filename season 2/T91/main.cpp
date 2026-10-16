#include <iostream>

using namespace std;

int main()
{
    int max , min , id ,md, idmin , idmax , n;

        cout << "id : ";
        cin >> id;
        cout << "hazine rozone : ";
        cin >> md;
        max = min = md ;
        idmax = idmin = id;
        cout << "for exit ---> -99 \nelse press ket : ";
        cin >> n;
    while(n != -99)
    {
        cout << "id : ";
        cin >> id;
        cout << "hazine rozone : ";
        cin >> md;
        if(md >= max)
        {
            idmax = id;
            max = md;
        }

        if(md <= min)
        {
            idmin = id;
            min = md;
        }

        cout << "for exit ---> -99 \nelse press ket : ";
        cin >> n;

    }

    cout << "id min " << idmin << " pay day " << min << " psy mouinh " << min*30 << " pay year " << min*365 <<endl;
    cout << "id max " << idmax << " pay day " << max << " psy mouinh " << max*30 << " pay year " << max*365 << endl;
    return 0;
}
