#include<stdio.h>
#include<stdlib.h>
int main()
{
   int t;
  scanf("%d",&t);
   while(t--)
   {
        long long n,i,x,y,z=0;

       scanf("%lld",&n);
        long long a[n+1];
        for(i=0;i<n;i++)  scanf("%lld",&a[i]);
        x=y=a[0];
         for(i=1;i<n;i++)
         {
             if(a[i]>x) x=a[i];
             if(a[i]<y) y=a[i];
         }
         z=labs(x-a[0])+labs(x-y)+labs(y-a[0]);

        for(i=1;i<n;i++)  if(z<abs(x-a[i])+abs(x-y)+abs(y-a[i])) z=abs(x-a[i])+abs(x-y)+abs(y-a[i]);
       printf("%lld\n",z);
   }
}
