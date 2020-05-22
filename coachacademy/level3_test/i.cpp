#include<iostream>
using namespace std;

int arr[18];
int cp[18];

int main(){
	int N, a;
	long long p, mx;
	int tt = 0;
	while(cin>>N){
	    	mx = 0;
		p = 1;
		for(int i=0; i<N;i++){
			cin >> a;
			if(!a){
				p = 1;
			} else {
				p *= a;
			}
			mx = max(p, mx);
		}
		
	    	cout << "Case #" << ++tt << ": The maximum product is " << mx << endl;
	}
}
