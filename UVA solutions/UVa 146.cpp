//============================================================================
// Name        : UVa146.cpp
// Author      : Ayoub Ed
// Description : C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	while(cin>>s && s!="#"){
		string s1 = s;
		int size = s.size();
		int j = size-1;
		while(s[j]<=s[j-1])j--;
		int pivot = j-1;
		j = size-1;
		while(s[pivot]>=s[j]&&j>pivot){
			j--;
		}
		char temp = s[j]; s[j]=s[pivot]; s[pivot]=temp;
		string str = s.substr(pivot+1,size);
		string str2 = s.substr(0,pivot+1);
		reverse(str.begin(),str.end());
		string res = str2+str;
		if(res>s1) cout<<res<<endl;
		else cout<<"No Successor"<<endl;
	}
	return 0;
}

//===============================================================================
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  while(cin>>s && s!="#"){
	  string s1 = s;
	  if(next_permutation(begin(s),end(s))) cout<<s<<endl;
	  else cout<<"No successor"<<endl;
  }
  return 0;
}
*/
//====================================================================================


