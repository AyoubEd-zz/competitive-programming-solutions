#include <stdio.h>
int main(){
  int N,a,b,c;
  bool sol;
  scanf("%d", &N);
  while(N--){
    sol =false;
    scanf("%d %d %d", &a,&b,&c);
    for (int i = -22; i <= 22&& !sol ; i++) {
      if(i*i<=c){
        for (int j = -100; j < 100 && !sol ; j++) {
          if(j!=i && i*i+j*j<=c){
            for (int k = -100; k < 100 && !sol; k++) {
              if (k!=i && k!= j && i*j*k == b && i*i+j*j+k*k == c){
                printf("%d %d %d\n", i,j,k);
                sol = true;
              }
            }
          }
        }
      }
    }
    if(!sol) printf("No solution.\n");
  }
  return 0;
}
