#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
  int t,n;
  scanf("%d", &t);
  while (t--) {
    int row[25],col[25],num[25],sol[5];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
      scanf("%d %d %d", &row[i], &col[i], &num[i]);
    }
    int m=0xffffff;
    for(int a=0;a<21;a++){
      for(int b=a+1;b<22;b++){
        for(int c=b+1;c<23;c++){
          for(int d=c+1;d<24;d++){
            for(int e=d+1;e<25;e++){
              int dis=0;
              for (int j = 0; j < n; j++) {
                dis+=num[j]*min( abs(row[j]-(a/5))+abs(col[j]-(a%5)),
                  min(abs(row[j]-(b/5))+abs(col[j]-(b%5)),
                    min(abs(row[j]-(c/5))+abs(col[j]-(c%5)),
                      min(abs(row[j]-(d/5))+abs(col[j]-(d%5)), abs(row[j]-(e/5))+abs(col[j]-(e%5)) ) ) ) );
              }
              if(dis<m){
                m=dis;
                sol[0]=a;sol[1]=b;sol[2]=c;sol[3]=d;sol[4]=e;
              }
            }
          }
        }
      }
    }
    printf("%d %d %d %d %d\n", sol[0],sol[1],sol[2],sol[3],sol[4]);
  }
  return 0;
}
