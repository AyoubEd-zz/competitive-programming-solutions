#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int arr[1010], n,m;
	int casee=0;
	while(scanf("%d", &n) == 1 && n){
		
		printf("Case %d:\n",++casee);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
		sort(arr, arr+n);
		scanf("%d", &m);
		while(m--){
		        int m1;
			scanf("%d", &m1);
			int tmp; long long s=(1<<20);
			for (int j = 0; j < n; j++)
			{
				for (int l = j+1; l < n; l++)
				{
					tmp=arr[l]+arr[j];
					if(abs(tmp-m1)<abs(s-m1)){
						s=tmp;
					}
					if(tmp>m1){
						break;
					}
				}
			}
			printf("Closest sum to %d is %d.\n",m1,s);
		}
	}
}