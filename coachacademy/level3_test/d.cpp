#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, N, mx;
	char c, ci;
	cin >> T;
	while(T--){
	    map<char, int> mp;
	    mx = 0;
	    ci = 'a';
	    cin >> N;
	    while(N--){
	    	cin >> c;
		mp[c]++;
		if(mp[c] > mx || (mp[c] == mx && c < ci)){
			mx = mp[c];
			ci = c;
		}
	    }
	    cout << ci << endl;
	}
}
