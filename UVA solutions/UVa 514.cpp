#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin>>n && n!=0){
		vector<int> v(n);
		vector<int> v2(n);
		for(int i=0;i<n;i++) v2[i]=i+1;
		while(cin>>v[0]&& v[0]!=0){
			for(int i=1;i<n;i++)cin>>v[i];
			stack<int> s;
			int h=0;
			int k=0;
			bool f =1;
			while(true){
				if(!s.empty()&& s.top()==v[h]){
					s.pop();
					h++;
					continue;
				}
				if(k<n && v[h]>=v2[k]){
					while(v[h]>=v2[k] && k<n){
						s.push(v2[k]);
						k++;
					}
					continue;
				}
				if(!s.empty()&& s.top()!=v[h]) {
					f=0;
					break;
				}
				if(h>=n){break;}
			}
			if(f)cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
		cout<<endl;
	}
	return 0;
}

