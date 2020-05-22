#include<bits/stdc++.h>
using namespace std;

long long cs[100001];

int main(){
	int N, D, m, f;
	vector<pair<int, int>> v;
	cin >> N >> D;

	for(int i=0;i<N;i++){
		    cin >> m >> f;
		v.push_back(pair<int,int>(m, f));
	}

	sort(v.begin(), v.end());
	for(int i=0;i<N;i++){
		cs[i] = v[i].second;
		if(i)cs[i] += cs[i-1];
	}

	long long ans = 0;
	for(int i=0;i<N;i++){
		int r = lower_bound(v.begin(), v.end(), make_pair(v[i].first+D, -1)) - v.begin() - 1;
		long long loc_sum = cs[r];
		if(i) loc_sum -= cs[i-1];
		ans = max(ans, loc_sum);
	}

	cout << ans;

	return 0;
}
