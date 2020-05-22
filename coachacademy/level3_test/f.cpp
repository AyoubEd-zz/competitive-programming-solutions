#include<iostream>
using namespace std;

int sum(int N, int num) {
    	int a; 
	if(num < N){
	    	cin>>a;
		return a + sum(N, num+1);
	} else {
		return 0;
	}
}

int main(){
	int T, N;
	cin >> T;
	for(int tt=1;tt<=T;tt++ ){
	    cin >> N;
	    cout << "Case " << tt << ": " << sum(N, 0) << endl;
	}
}

