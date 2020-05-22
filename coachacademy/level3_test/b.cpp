#include<iostream>
using namespace std;

int main(){
	int T, a, b, c;
	cin >> T;
	while(T--){
	    cin >> a >> b >> c;
	    cout << max(a, max(b, c)) << endl;
	}
}
