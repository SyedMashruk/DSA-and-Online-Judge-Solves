#include<stdio.h>
#include<math.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
         long long i,n,x,count=0;
         double y;
         scanf("%lld",&n);
         long long a[n];
         for(i=0;i<n;i++)
         {
             scanf("%lld",&a[i]);
             x=sqrt(a[i]);
         y=sqrt(a[i]);
         if(x!=y)
            count=1;
         }
    if(count==1)
        printf("YES\n");
    else
        printf("NO\n");
    }
    return 0;
}

