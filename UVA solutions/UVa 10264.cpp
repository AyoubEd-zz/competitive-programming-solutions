#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> v, v2;
        int m;
        long long size = 1 << n;
        long long b = size;
        while (size--)
        {
            cin >> m;
            v.push_back(m);
        }
        for (int i = 0; i < b; i++)
        {
            int pot = 0;
            for (int j = 0; j < n; j++)
            {
                pot += v[i ^ (1 << j)];
            }
            v2.push_back(pot);
        }
        int ans = 0;
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ans < v2[i] + v2[i ^ (1 << j)])
                {
                    ans = v2[i] + v2[i ^ (1 << j)];
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
