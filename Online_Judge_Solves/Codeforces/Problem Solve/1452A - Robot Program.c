#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long x,y,n;
        scanf("%lld%lld",&x,&y);
        if(x==y)
            printf("%lld\n",2*x);
        else
        {
            if(x<y)
            {
                n=y-x;
                printf("%lld\n",2*x+2*n-1);
            }
            else
            {
                n=x-y;
                printf("%lld\n",2*y+2*n-1);
            }
        }
    }
    return 0;
}
