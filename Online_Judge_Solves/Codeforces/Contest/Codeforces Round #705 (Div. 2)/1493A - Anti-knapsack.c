#include<stdio.h>
int main()
{
    int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,k,i,count;
        scanf("%lld%lld",&n,&k);
        count=k/2+(n-k);
        printf("%lld\n",count);
        for(i=1; i<=count+1; i++)
        {
            if(n!=k)
            {
                printf("%lld ",n);
            }
            n=n-1;
        }
        printf("\n");
    }
    return 0;
}
