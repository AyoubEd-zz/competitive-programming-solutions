#include<bits/stdc++.h>
using namespace std;

int main(){
	int N, target, a, i, j;
	map<int, int> mp;
	cin >> N;
	int arr[N];
	for(int i=0;i<N;i++){
		cin >> arr[i];
	}
	cin >> target;
	i = 0;
	j = 0;
	for(int k = 0;k<N;k++){
	    a = arr[k];
	    if(mp.find(a) != mp.end() && abs(target-2*a)>=j-i){
	    	i = min(a, target-a);
		j = max(a, target-a);
	    }
	    mp[target - a] = 1;
	}
	cout << "Peter should buy books whose prices are " << i << " and " << j << endl;
}
