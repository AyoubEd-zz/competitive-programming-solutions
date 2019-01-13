#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v;
  int d;
  while(cin>>d){
	  v.push_back(d);
	  sort(v.begin(), v.end());
	  int k = v.size();
	  if(k%2!=0) cout<<v[k/2]<<endl;
	  else cout<<(v[k/2-1]+v[k/2])/2<<endl;
  }
  return 0;
}
