#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m && (n != 0 || m != 0))
    {
        bitset<1000100> slot;
        slot.reset();
        int l = 0, r = 0;
        bool keep = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> l >> r;
            for (int j = l + 1; j <= r; j++)
            {
                if (slot[j] != 0)
                {
                    keep = 0;
                    break;
                }
                else
                {
                    slot[j] = 1;
                }
            }
        }
        int inter = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> l >> r >> inter;
            while (l <= 1000000 && keep)
            {
                for (int j = l + 1; j <= r; j++)
                {
                    if (slot[j] != 0)
                    {
                        keep = 0;
                        break;
                    }
                    else
                    {
                        slot[j] = 1;
                    }
                }
                l += inter;
                r = min(1000000, r + inter);
            }
        }
        if (keep == 1)
            cout << "NO CONFLICT" << endl;
        else
            cout << "CONFLICT" << endl;
    }
    return 0;
}
