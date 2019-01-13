#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int t,n;int arr[1009];
	int i,l;
	scanf("%d", &t);
	while(t--){
		scanf("%d",&n);
		int B=0, ai;
		for (i = 0; i < n; i++)
		{
			scanf("%d",&ai);	
			for (l= i-1; l >=0 ; l--)
			{
				if (ai<arr[l])
				{
					arr[l+1]=arr[l];
				}
				else{
					
					break;
				}
			}
			arr[l+1]=ai;
			B+=l+1;
		}
		printf("%d\n", B);
	}
	return 0;
}