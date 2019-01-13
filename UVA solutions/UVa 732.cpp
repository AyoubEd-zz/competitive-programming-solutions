#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string s2;
    while (cin >> s >> s2)
    {
        int n = s.size();
        vector<char> vc;
        vector<string> res;
        if (s.size() == s2.size())
        {
            for (int i = 0; i < 2 * n; i++)
            {
                if (i < n)
                    vc.push_back('i');
                else
                    vc.push_back('o');
            }
            do
            {
                vector<char> vt;
                vt.clear();
                stack<char> st;
                int k = 0;
                int y = 0;
                bool f = true;
                if(vc[0] == 'o') {
                        continue;
                }
                for (int j = 0; j < 2 * n; j++)
                {
                    if (vc[j] == 'i')
                    {
                        st.push(s[k]);
                        k++;
                    }
                    if (vc[j] == 'o')
                    {
                        if (st.empty())
                        {
                            f = false;
                            break;
                        }
                        char c = st.top();
                        char cf = s2[y];
                        if (c != cf)
                        {
                            f = false;
                            break;
                        }
                        vt.push_back(st.top());
                        st.pop();
                        y++;
                    }
                }
                if (f)
                {
                    string str(vc.begin(), vc.end());
                    res.push_back(str);
                }
            } while (next_permutation(vc.begin(), vc.end()));
            cout << "[" << endl;
            for (auto a : res)
            {
                for (int h = 0; h < (int)a.size(); h++)
                {
                    cout << a[h];
                    if (h < (int)a.size() - 1)
                        cout << " ";
                }
                cout << endl;
            }
            cout << "]" << endl;
        }
    }
    return 0;
}
