#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,m,k,r;
        scanf("%lld%lld%lld",&n,&m,&k);
        r=(m*n)-1;
        if(r==k)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
