#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin>>tc;
	int bc=0;
	while(tc--){
		int n,t,m;
		bc++;
		cin>>n>>t>>m;
		vector<queue<pair<int,int>>> cars(2);
		vector<int> upload_time(m);
		int d;
		string s;
		for(int i=0;i<m;i++){
			cin>>d>>s;
			if(s=="left") cars[0].push(pair<int,int>(i, d));
			if(s=="right") cars[1].push(pair<int,int>(i, d));
		}

		int time=0;
		string f="left";
		while(!cars[0].empty() || !cars[1].empty()){
			int k;
			int g=0;
			bool h = 1;
			if(f=="left") k=0;
			if(f=="right") k=1;
			while(!cars[k].empty() && g<n && cars[k].front().second <= time){
				upload_time[cars[k].front().first] = time+t;
				cars[k].pop();
				g++;
			}
			if(g==0){
				if(cars[0].empty()) {
					int a2 = cars[1].front().second;
					time=(a2>time)?a2:time;
					if(k==1) h=0;
				}
				else if(cars[1].empty()){
					int a1 = cars[0].front().second;
					time=(a1>time)?a1:time;
					if(k==0) h=0;
				}
				else{
					int a1 = cars[0].front().second;
					int a2 = cars[1].front().second;
					if(a1>a2){
						time=(a2>time)?a2:time;
						if(k==1) h=0;
					}
					if(a2>a1){
						time=(a1>time)?a1:time;
						if(k==0) h=0;
					}
					if(a1==a2){
						time=(a2>time)?a2:time;
						h = 0;
					}
				}
			}
			if(h){
				time+=t;
				if(f=="left") f="right";
				else f="left";
			}
		}
		for(int i=0;i<m;i++){
			cout<<upload_time[i]<<endl;
		}
		if(tc) cout<<endl;
	}
	return 0;
}

