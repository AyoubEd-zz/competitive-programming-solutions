#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,d;
	while(cin>>n>>m && (n!=0 || m!=0)){
		set<int> ma;
		for(int i=0;i<n;i++){
			cin>>d;
			ma.insert(d);
		}
		int count = 0;
		for(int i=0;i<m;i++){
			cin>>d;
			if(ma.count(d))count++;
		}
		cout<<count<<endl;
	}
    return 0;
}
