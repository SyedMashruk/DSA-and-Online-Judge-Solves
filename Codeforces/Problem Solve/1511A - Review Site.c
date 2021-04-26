#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
         long long i,n,count=0;
         scanf("%lld",&n);
         long long a[n];
         for(i=0;i<n;i++)
         {
             scanf("%lld",&a[i]);
         if(a[i]==1 || a[i]==3)
            count++;
         }
printf("%lld\n",count);
    }
    return 0;
}
