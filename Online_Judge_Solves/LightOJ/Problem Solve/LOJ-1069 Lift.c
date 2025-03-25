#include<stdio.h>
#include<math.h>
int main()
{
    long long t,j=1;
    scanf("%lld",&t);
    while(t--)
    {
      long long m,l,k;
      scanf("%lld%lld",&m,&l);
      k=abs(m-l)+m;
      printf("Case %lld: %lld\n",j,k*4+19);
        j++;
    }
        return 0;
}
