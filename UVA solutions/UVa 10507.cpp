//In Progress
#include <bits/stdc++.h>
using namespace std;

int n,m;
string s;
vector<vector<int>> v(26);
bitset<26> awake;

int main(){
	while(cin>>n>>m){
		fill(v.begin(), v.end(), vector<int>());
		awake.reset();
		cin>>s;
		for(char c:s)awake.set(c-'A');
		while(m--){
			cin>>s;
			int a = (int) s[0]-'A';
			int b = (int) s[1]-'A';
			v[a].push_back(b);
			v[b].push_back(a);
		}
		bool f = true;
		int years = 0;
		while(awake.count()<n){
			vector<int> just_woke;
			for(int i=0;i<26;i++){
				if(awake[i]) continue;
				int an = 0;
				for(int ne:v[i]) if(awake[ne]) an++;
				if(an>=3) just_woke.push_back(i);
			}
			if(just_woke.empty()) {f=0;break;}
			for(auto a:just_woke) awake.set(a);
			years++;
		}
		if(f) cout<<"WAKE UP IN, "<<years<<", YEARS\n";
		else cout<<"THIS BRAIN NEVER WAKES UP\n";
	}
	return 0;
}
