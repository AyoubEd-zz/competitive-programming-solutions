#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, N, a, sum;
	double sq;
	cin >> T;
	while(T--){
	    	sum = 0;
		cin >> N;
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				cin>>a;
				sq = sqrt(a);
				if(sq - floor(sq) == 0){
					sum += a;
				}		
			}
		}
		cout << sum << endl;
	}
}
