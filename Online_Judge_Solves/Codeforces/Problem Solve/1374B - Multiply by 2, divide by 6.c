#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,count=0;
        scanf("%lld",&n);
        while(n!=1 && count<1000)
        {
            count++;
             if(n%6==0)
                n=n/6;
             else
                n=n*2;
        }
        if(n==1)
        printf("%d\n",count);
        else
            printf("-1\n");
    }
    return 0;
}
