#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,temp,count=0,x=1,last=0,i;
        scanf("%lld",&n);
        if(n%2050!=0)
            printf("-1\n");
        else
        {
            temp=n/2050;
            while(temp!=0)
            {
                temp=temp/10;
                count++;
            }
            for(i=1; i<=count; i++)
                x=x*10;
            n=n/2050;

        while(x!=0)
            {
               last=last+(n/x);
               n=n%x;
               x=x/10;
            }
            printf("%lld\n",last);
        }
    }
    return 0;
}
