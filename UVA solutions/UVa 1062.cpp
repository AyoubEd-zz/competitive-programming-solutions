#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int g=1;
	while(cin>>s && s!="end"){
		vector<int> v;
		for(int i=0;i<s.size();i++){
			sort(v.begin(),v.end());
			bool f =true;
			for(int j=0;j<v.size();j++){
				if(s[i]<=v[j]){
					v[j]=s[i];
					f=0;
					break;
				}
			}
			if(f) v.push_back(s[i]);
		}
		cout<<"Case "<<g<<": "<<v.size()<<endl;
		g++;
	}
	return 0;
}

