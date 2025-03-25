#include<stdio.h>
int main()
{
    long long t,i=1;
    scanf("%lld",&t);
    while(t--)
    {
        long long m,n,x;
        scanf("%lld%lld",&m,&n);
        x=m*n;
        if(m==1)
            printf("Case %lld: %lld\n",i,n);
        else if(n==1)
            printf("Case %lld: %lld\n",i,m);
        else if((m==2 && n%2==0 && n>8) || (n==2 && m%2==0 && m>8))
            printf("Case %lld: %lld\n",i,(x/2)+2);
        else if((m==2 && n%2==1) || (n==2 && m%2==1))
            printf("Case %lld: %lld\n",i,(x/2)+1);
        else if(x%2==1)
            printf("Case %lld: %lld\n",i,(x/2)+1);
        else if(x%2==0)
            printf("Case %lld: %lld\n",i,x/2);
        i++;
        }
    return 0;
}
