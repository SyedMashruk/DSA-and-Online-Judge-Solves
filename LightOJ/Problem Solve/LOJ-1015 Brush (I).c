#include<stdio.h>
int main()
{
    long long t,j=1;
    scanf("%lld",&t);
    while(t--)
    {
       long long n,i,sum=0;
        scanf("%lld",&n);
        long long a[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]<=0)
                a[i]=0;
            sum=sum+a[i];
        }
        printf("Case %lld: %lld\n",j,sum);
        j++;
    }
        return 0;
}
