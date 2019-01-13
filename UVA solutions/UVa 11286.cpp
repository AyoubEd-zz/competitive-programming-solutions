#include <bits/stdc++.h>

using namespace std;


int main()
{
   int n;
   while(cin>>n && n!=0){
	   map<string, int> m;
	   int d;
	   int mo = -1;
	   string v[5];
	   for(int j=0;j<n;j++){
		   for(int i=0;i<5;i++) cin>>v[i];
		   sort(v,v+5);
		   string s = "";
		   for(auto a:v) s+=a;
		   if(!m.count(s)){
			   m[s]=1;
			   mo = max(mo, 1);
		   }
		   else{
			   m[s]++;
			   mo = max(mo, m[s]);
		   }
	   }
	   int b=0;
	   for(map<string, int>::iterator it=m.begin(); it!=m.end(); it++){
		   if(it->second == mo) b+=mo;
	   }
	   cout<<b<<endl;
   }
    return 0;
}
