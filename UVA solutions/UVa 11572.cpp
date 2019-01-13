#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc,n,d;
	cin>>tc;
	while(tc--){
		map<int,int> ma;
		cin>>n;
		int st_index = 0;int b=0;int maxN=-1;
		for(int i=0;i<n;i++){
			cin>>d;
			if(ma.count(d) && ma[d]>=st_index){
				maxN = max(b,maxN);
				st_index = ma[d]+1;
				b=i-st_index+1;
				ma[d]=i;
			}
			else{ma[d]=i;b++;}
		}
		maxN = max(b,maxN);
		cout<<maxN<<endl;
	}
    return 0;
}
