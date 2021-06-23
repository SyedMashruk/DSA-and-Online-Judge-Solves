#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,temp,x=0,count=0;
        scanf("%lld",&n);
        if(n<10)
            printf("%lld\n",n);
        else
            {
               temp=n;
               while(temp!=0)
               {
                   temp/=10;
                   x=x*10+1;
               }
               while(n>10)
               {
                   count=count+n/x;
                   n=x;
                   x=x/10;
                   n=n-x;
               }
               printf("%lld\n",count+9);
            }
    }
    return 0;
}
