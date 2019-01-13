#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin>>tc;
	int bf, g, b;
	while(tc--){
		int d;
		cin>>bf>>g>>b;
		multiset<int, greater<int>> v1;
		multiset<int, greater<int>> v2;
		vector<int> bg;
		vector<int> bb;
		for(int i=0;i<g;i++){
			cin>>d;
			v1.insert(d);
		}
		for(int i=0;i<b;i++){
			cin>>d;
			v2.insert(d);
		}

		while(!v1.empty() && !v2.empty()){

			int batf = min(bf, min((int)v1.size(), (int)v2.size()));
			int j=0;
			for(multiset<int, greater<int>>::iterator it=v1.begin(); j<batf; j++){
				bg.push_back(*it);
				v1.erase(it++);
			}
			j=0;
			for(multiset<int, greater<int>>::iterator it=v2.begin(); j<batf; j++){
				bb.push_back(*it);
				v2.erase(it++);
			}
			for(int i=0;i<batf;i++){
				if(bg[i]>bb[i]){
					v1.insert(bg[i]-bb[i]);
				}
				if(bg[i]<bb[i]){
					v2.insert(bb[i]-bg[i]);
				}
			}
			bg.clear();
			bb.clear();
		}
		if(v1.empty() && v2.empty()) cout<<"green and blue died"<<endl;
		else if(v1.empty()) {
			cout<<"blue wins"<<endl;
			for(auto a:v2)cout<<a<<endl;
		}
		else if(v2.empty()) {
			cout<<"green wins"<<endl;
			for(auto a:v1)cout<<a<<endl;
		}

		if(tc)cout<<endl;
	}
	return 0;
}

