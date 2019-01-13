#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc,l,m;
	cin>>tc;
	while(tc--){
		int i;
		int d;
		string s;
		cin>>l>>m;
		vector<deque<int>> v(2);
		string f="left";
		for(i=0;i<m;i++){
			cin>>d>>s;
			if(s[0]=='l')v[0].push_back(d);
			else v[1].push_back(d);
		}
		int k=0;
		int travels=0;
		int len;
		while(!v[0].empty() || !v[1].empty()){
			len=0;
			while(!v[k].empty() && len+v[k].front()<=100*l){
				len+=v[k].front();
				v[k].pop_front();
			}
			k=1-k;
			travels++;
		}
		cout<<travels<<endl;
	}
	return 0;
}

