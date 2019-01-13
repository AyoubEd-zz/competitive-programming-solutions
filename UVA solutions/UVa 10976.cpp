#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
int main()
{
	int t,k,s;
	std::vector<pair<int,int>> v;
	while(cin>>k){
		for (int y = k+1; y <= 2*k; y++)
		{
			if( (k*y)%(y-k)==0 ){
				v.push_back(make_pair((k*y)/(y-k),y));
			}
		}
		s=v.size();
		printf("%d\n", s);
		for (int i = 0; i < s; i++)
		{
			printf("1/%d = 1/%d + 1/%d\n", k,v[i].first,v[i].second);
		}
		v.clear();
	}
	return 0;
}