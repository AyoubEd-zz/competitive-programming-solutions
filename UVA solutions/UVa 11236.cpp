#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
  int p,s,d;
  for (int a = 1; a+a+a+a <= 2000; a++) {
    for (int b = a; a+b+b+b <= 2000; b++) {
      for (int c = b; a+b+c+c <= 2000; c++) {
        p = (long long) a*b*c;
        if( p <= 1000000 ) continue;
        s=(a+b+c);
        d = s*1000000 / (p - 1000000);
        if (a+b+c+d > 2000 || d < c) continue;
        printf("%0.2lf %0.2lf %0.2lf %0.2lf\n", a/100.0,b/100.0,c/100.0,d/100.0);
      }
    }
  }
  return 0;
}
