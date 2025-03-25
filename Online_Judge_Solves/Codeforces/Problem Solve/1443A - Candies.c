#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long x,k,n,z=1,p=1;
        scanf("%lld",&n);
        for(k=2; k<=n; k++)
        {
            p=2*p;
            z=z+p;
            if(n%z==0)
            {
                x=n/z;
                break;
            }
        }
        printf("%lld\n",x);
    }
    return 0;
}
