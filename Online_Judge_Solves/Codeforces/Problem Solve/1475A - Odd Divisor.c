#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
     long long n,i,count=0,x;
     scanf("%lld",&n);
     x=n%10;
     if(x%2==1)
        count++;
     else
        {
     for(i=2;i<=n;i*=2)
     {
         if(i!=n)
            count++;
         else if(i==n)
         {
             count=0;
             break;
         }
     }
        }
     if(count==0)
        printf("NO\n");
     else
        printf("YES\n");
    }
    return 0;
}
