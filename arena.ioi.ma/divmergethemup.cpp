#include<iostream>
#include<map>

using namespace std;

int main() {
	int la, lb, tmp;
	map<int, int> mp;
	cin >> la >> lb;

	while(la--) {
		cin >> tmp;
		mp[tmp] += 1;
	}

	int bl = 0;
	while(lb--) {
	    	cin >> tmp;
		if(mp.find(tmp) != mp.end() && mp[tmp]>0) {
		    	mp[tmp]--;
		    	if(bl == 1){
				cout << " ";
			}
			cout << tmp;
		    	bl = 1;
		}
	}

	if(bl == 0){
		cout << "Empty" << endl;
	} else {
		cout << endl;
	}
}
