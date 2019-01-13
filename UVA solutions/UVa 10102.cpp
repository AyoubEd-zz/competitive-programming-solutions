#include <stdio.h>
#include <utility>
#include <vector>
#include <stdlib.h>
#include<algorithm>
using namespace std;
int main(){
	int m,s1,s2,z;
	vector<pair<int,int>> v1;
	vector<pair<int,int>> v2;
	char arr[100][100];
	while(scanf("%d",&m)==1){
	        vector<pair<int,int>> v1;
	        vector<pair<int,int>> v2;
		for (int i = 0; i < m; i++)
		{
			scanf("%s\n",arr[i]);
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if(arr[i][j]=='1') {

				        v1.push_back(make_pair(i,j));}
				else if(arr[i][j]=='3'){
				        v2.push_back(make_pair(i,j));}
			}
		}
		
		s1=v1.size();
		s2=v2.size();
		z = -1;
		int dis;
		for (int i = 0; i < s1; i++)
		{
			int w = (1<<30);
			for(int j=0; j < s2; j++){
				dis=abs(v1[i].first-v2[j].first)+abs(v1[i].second-v2[j].second);
				w=min(w,dis);
			}
			z=max(z,w);
		}
		printf("%d\n",z);
		v1.clear();v2.clear();
	}
	return 0;
}