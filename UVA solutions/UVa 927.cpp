#include <cstdio>
long long pow(long long x, long long y) {
    if(y == 0)  return 1;
    if(y&1)
        return x*pow(x*x, y>>1);
    else
        return pow(x*x, y>>1);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n, d ,k ,arr[30];
		long long s = 0;
		long long an = 0;
		scanf("%d",&n);
		for (int v = 0; v <= n; v++)
		{
			scanf("%d", &arr[v]);
		}
		scanf("%d %d", &d , &k);
		int deg =1;
		while(k>s){
			s+=deg*d;
			deg++;
		}

		for (int l = 0; l <=n; l++)
		{
			an+=arr[l]*pow(deg-1,l);
		}
		printf("%lld\n", an);
	}
	return 0;
}