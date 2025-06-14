#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
    cout << "DIGITAL CLOCK" << endl;
    cout << "............." << endl;
    int h, m, s, err, a;
    err = a = 0;
    while (err == 0)
    {
        cout << "enter hour : " <<endl;
        cin >> h;

        cout << "enter minutes : " <<endl;
        cin >> m;

        cout << "enter seconds : " <<endl;
        cin >> s;

        if (h < 24 && m < 60 && s < 60)
            err++;
        else
            system("cls");
    }

    while (a == 0)
    {
        system("cls");
        cout << h << ":" << m << ":" << s << endl;
        Sleep(1000);
        s++;
        if(s > 59)
        {
            s = 00;
            m++;
        }
        if(m > 59)
        {
            m = 00;
            h++;
        }
        if( h > 24)
        {
             h = 00;
        }
    }

}
