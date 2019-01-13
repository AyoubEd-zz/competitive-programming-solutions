#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,r;
	while(cin>>n>>m){
		vector<vector<pair<int,int>>> v;
		v.resize(m);
		fill(v.begin(),v.end(), vector<pair<int,int>>() );
		for(int i=0;i<n;i++){
			cin>>r;
			vector<int> arr(r),arr2(r);
			for(int j=0;j<r;j++)cin>>arr[j];
			for(int j=0;j<r;j++)cin>>arr2[j];
			for(int j=0;j<r;j++) {
				v[arr[j]-1].push_back(make_pair(i+1,arr2[j]));
			}

		}
		cout<<m<<" "<<n<<endl;
		for(auto a:v){
			int q = a.size();
			cout<<q;
			for(int i=0;i<q;i++){
				cout<<" "<<a[i].first;
			}
			cout<<endl;
			for(int i=0;i<q;i++){
				if(i)cout<<" ";
				cout<<a[i].second;
			}
			cout<<endl;
		}
	}
	return 0;
}
