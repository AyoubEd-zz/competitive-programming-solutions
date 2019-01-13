#include <bits/stdc++.h>
using namespace std;

int main() {
	int s,b;
	while(cin>>s>>b && s!=0 && b!=0){
		int L[s],R[s];
		for(int i=0;i<s;i++){
			if(i==0){
				L[i]=-1;
				R[i]=i+2;
			}
			else if(i>0&&i<s-1){
				L[i]=i;
				R[i]=i+2;
			}
			else{
				L[i]=i;
				R[i]=-1;
			}
		}
		L[0]=-1;
		R[s-1]=-1;
		int l,r;
		for(int i=0;i<b;i++){
			cin>>l>>r;
			R[L[l-1]-1]=R[r-1];
			L[R[r-1]-1]=L[l-1];
			if(L[l-1]>-1) cout<<L[l-1];
			else cout<<"*";
			cout<<" ";
			if(R[r-1]>-1) cout<<R[r-1]<<endl;
			else cout<<"*"<<endl;
		}
		cout<<"-"<<endl;
 	}
}
