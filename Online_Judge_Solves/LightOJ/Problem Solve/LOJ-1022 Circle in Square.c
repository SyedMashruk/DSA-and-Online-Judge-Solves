#include<stdio.h>
#include<math.h>
int main()
{
    long long t,j=1;
    scanf("%lld",&t);
    while(t--)
    {
       double n,a,o;
        scanf("%lf",&n);
         a=4*n*n;
         o=M_PI*(n*n);
         printf("Case %lld: %.2lf\n",j,a-o);
        j++;
    }
        return 0;
}
