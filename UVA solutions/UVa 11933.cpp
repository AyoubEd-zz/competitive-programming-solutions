#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin>>n && n!=0){
		int a = 0,b = 0;
		int count = 0;
		while(n!=0){
			int t =  n & -n;
			if(count==0) {a+= t ; count=(count+1)%2;}
			else {b+= t;count=(count+1)%2;}
			n= n & ~t;
		}
		cout<<a<<" "<<b<<endl;
	}
	return 0;
}
