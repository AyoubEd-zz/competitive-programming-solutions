#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, d, k, v;
    while (cin >> n >> m)
    {
        map<int, vector<int>> ma;
        for (int i = 0; i < n; i++)
        {
            cin >> d;
            ma[d].push_back(i);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> k >> v;
            if (ma[v].empty())
                cout << 0 << endl;
            else
            {
                if ((int)ma[v].size() < k)
                {
                    cout << 0 << endl;
                }
                else
                    cout << ma[v][k - 1] + 1 << endl;
            }
        }
    }
    return 0;
}
