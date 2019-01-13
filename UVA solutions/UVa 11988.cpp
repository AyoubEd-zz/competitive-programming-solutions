#include <bits/stdc++.h>

using namespace std;

list<char> lis;
string s;

int main()
{
    while(cin>>s){
    	lis.clear();
    	list<char>::iterator it = lis.begin();
    	for(char a : s){
    		if(a=='[') it = lis.begin();
    		else if(a==']') it = lis.end();
    		else lis.insert(it, a);
    	}
    	for(list<char>::iterator it=lis.begin(); it!=lis.end(); it++){
    		cout<<*it;
    	}
    	cout<<'\n';
    }
    return 0;
}
