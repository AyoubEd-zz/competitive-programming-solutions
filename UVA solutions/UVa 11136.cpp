#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,d;
	while(cin>>n && n){
		multiset<int, greater<int>> ma;
		multiset<int, greater<int>>::iterator it;
		ma.clear();
		long long pr = 0;
		while(n--){
			cin>>k;
			for(int i=0;i<k;i++){
				cin>>d;
				ma.insert(d);
			}
			pr+=(*ma.begin()-*ma.rbegin());
			ma.erase(ma.begin());
			it = ma.end();
			--it;
			ma.erase(it);
		}
		cout<<pr<<endl;
	}
    return 0;
}
