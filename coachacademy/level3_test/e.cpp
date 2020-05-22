#include<iostream>
using namespace std;

int main(){
	int T, N, l, g, r;
	cin >> T;
	while(T--){
	    cin >> N;
	    for(int i=0; i<=N/2;i++){
		    	l = i+1;
			g = N - 2*l;
			r = N;
			while(l--){
				cout << "*";
				r--;
			}
			while(g-->0){
				cout << " ";
				r--;
			}
			while(r-->0){
				cout << "*";
			}
		    cout << endl;
		}
	    }
	    for(int i=(N/2)-1; i>=0;i--){
		    	l = i+1;
			g = N - 2*l;
			r = N;
			while(l--){
				cout << "*";
				r--;
			}
			while(g--){
				cout << " ";
				r--;
			}
			while(r--){
				cout << "*";
			}
		    cout << endl;
		}
	}
}
