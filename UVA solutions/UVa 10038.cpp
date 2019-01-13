#include <cstdio>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
    	bool f=true;
        int foo[n];
        int doo[n];
        fill( doo, doo + n, 5 );
        doo[0]=1;
        for (int i=0; i < n; i++)
        {
            scanf("%d", &foo[i]);
            if(i>=1) {
                int l = abs(foo[i]-foo[i-1]);
                if(l<n && l>0 && doo[l]!=1) doo[l] = 1;
                else{f=false;break;}
            }
        }
        if(f==true) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}

