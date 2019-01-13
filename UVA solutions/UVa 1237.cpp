#include <cstdio>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int d,q,P;
		char arr1[10000][25]; int arr2[10000]; int arr3[10000];
		scanf("%d",&d);
		for (int i = 0; i < d; i++)
		{
			scanf("%s %d %d",arr1[i],&arr2[i],&arr3[i]);
		}
		scanf("%d",&q);
		for (int j = 0; j < q; j++)
		{
			scanf("%d",&P);
			int ind = 0;int indice;
			for (int l = 0; l < d; l++)
			{
				if(P>=arr2[l] && P<=arr3[l]){
					ind++;
					indice = l;
				}
				if(ind > 1) break;
			}
			if(ind==1) printf("%s\n", arr1[indice]);
			else printf("UNDETERMINED\n");
		}
		if(t) printf("\n");	
	}
	return 0;	
}