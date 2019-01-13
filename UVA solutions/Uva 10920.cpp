#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, p;
    while (cin >> s >> p && s && p)
    {
        int pas = 1;
        int x = (s / 2) + 1, y = (s / 2) + 1;
        int k = 0;
        int pe = 1;
        int incorn = 0;
        while (pas < p)
        {
            if (k == 0)
            {
                y += pe;
            }
            if (k == 1)
            {
                x -= pe;
            }
            if (k == 2)
            {
                y -= pe;
            }
            if (k == 3)
            {
                x += pe;
            }
            pas += pe;
            k = (k + 1) % 4;
            if (incorn == 0)
            {
                incorn = 1;
            }
            else
            {
                pe++;
                incorn = 0;
            }
        }
        if (k == 1)
        {
            while (pas > p)
            {
                y--;
                pas--;
            }
            cout << "Line = " << y << ", column = " << x << "." << endl;
        }
        if (k == 2)
        {
            while (pas > p)
            {
                x++;
                pas--;
            }
            cout << "Line = " << y << ", column = " << x << "." << endl;
        }
        if (k == 3)
        {
            while (pas > p)
            {
                y++;
                pas--;
            }
            cout << "Line = " << y << ", column = " << x << "." << endl;
        }
        if (k == 0)
        {
            while (pas > p)
            {
                x--;
                pas--;
            }
            cout << "Line = " << y << ", column = " << x << "." << endl;
        }
    }
    return 0;
}
