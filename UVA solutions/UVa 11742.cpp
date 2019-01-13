#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;
int n,m;
int p[]={0,1,2,3,4,5,6,7,8,9,10}; 
int a[22],b[22],c[22];
bool check() {
	for (int i = 0; i < m; i++) {
		if (c[i] > 0 && abs(p[a[i]] - p[b[i]]) > c[i])
			return false;
		if (c[i] < 0 && abs(p[a[i]] - p[b[i]]) < -c[i])
    return false;
	}
	return true;
}
int main(){
    
    while(scanf("%d %d", &n, &m) && (n+m)){
            int res = 0;                       
            for(int i =0; i<m ;i++){
                scanf("%d %d %d", &a[i], &b[i], &c[i]);
            }
            do{
                if(check){res++;}
            }while(next_permutation(p,p+n));
            printf("%d\n", res);
    }
    return 0;
}