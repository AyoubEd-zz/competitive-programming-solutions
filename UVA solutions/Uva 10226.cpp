#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin>>tc;
	getchar();
	getchar();
	while(tc--){
		int n=0;
		string s;
		map<string,int> m;
		while(getline(cin,s)){
			if(s=="") break;
			m[s]++;
			n++;
		}
		for(map<string, int>::iterator i = m.begin() ; i!=m.end() ; i++){
			cout<<i->first<<" "<<fixed<<setprecision(4)<<i->second * 100.0/n<<endl;
		}
		if(tc)cout<<endl;
	}
	return 0;
}

