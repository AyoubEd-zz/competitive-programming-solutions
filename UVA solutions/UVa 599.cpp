#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc;cin>>tc;
	string s;
	while(tc--){
		vector<int> bset(26);
		fill(bset.begin(), bset.end(), 0);
		int edges = 0;
		while(getline(cin,s) && s[0]!='*'){
			if(s=="")continue;
			bset[(int)s[1]-65]++;
			bset[(int)s[3]-65]++;
			edges++;
		}
		getline(cin,s);
		int acorn =0;
		int nodes = 0;
		for(int i=0;i<(int)s.size();i++){
			if(s[i]==',') continue;
			else{
				if(bset[(int)s[i]-65] == 0)acorn++;
				else nodes++;
			}
		}
		cout<<"There are "<<nodes-edges<<" tree(s) and "<<acorn<<" acorn(s)."<<endl;
	}
	return 0;
}
